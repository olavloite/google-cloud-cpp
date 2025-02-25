#!/usr/bin/env bash
# Copyright 2022 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -euo pipefail
BOLD_ON_GREY=$(tput bold && tput setab 252)
TURN_OFF_ATTR=$(tput sgr0)
SEPARATOR=

function banner() {
  test -n "${SEPARATOR}" && echo
  echo "${BOLD_ON_GREY}[ $* ]${TURN_OFF_ATTR}"
  SEPARATOR=Y
}

banner "Determining googleapis HEAD commit and tarball checksum"
REPO="googleapis/googleapis"
BRANCH="master"
COMMIT=$(curl -fsSL -H "Accept: application/vnd.github.VERSION.sha" \
  "https://api.github.com/repos/${REPO}/commits/${BRANCH}")
DOWNLOAD="$(mktemp)"
curl -fsSL "https://github.com/${REPO}/archive/${COMMIT}.tar.gz" -o "${DOWNLOAD}"
gsutil -q cp "${DOWNLOAD}" "gs://cloud-cpp-community-archive/com_google_googleapis/${COMMIT}.tar.gz"
SHA256=$(sha256sum "${DOWNLOAD}" | sed "s/ .*//")
rm -f "${DOWNLOAD}"

banner "Updating Bazel/CMake dependencies"
sed -i -f - bazel/google_cloud_cpp_deps.bzl <<EOT
  /name = "com_google_googleapis",/,/strip_prefix = "/ {
    s;/com_google_googleapis/.*.tar.gz",;/com_google_googleapis/${COMMIT}.tar.gz",;
    s;/${REPO}/archive/.*.tar.gz",;/${REPO}/archive/${COMMIT}.tar.gz",;
    s/sha256 = ".*",/sha256 = "${SHA256}",/
    s/strip_prefix = "googleapis-.*",/strip_prefix = "googleapis-${COMMIT}",/
  }
EOT
sed -i -f - cmake/GoogleapisConfig.cmake <<EOT
  /^set(_GOOGLE_CLOUD_CPP_GOOGLEAPIS_COMMIT_SHA$/ {
    n
    s/".*"/"${COMMIT}"/
  }
  /^set(_GOOGLE_CLOUD_CPP_GOOGLEAPIS_SHA256$/ {
    n
    s/".*"/"${SHA256}"/
  }
EOT

banner "Updating the protodeps/protolists"
external/googleapis/update_libraries.sh

banner "Regenerating libraries"
# generate-libraries fails if it creates a diff, so ignore its status.
ci/cloudbuild/build.sh --docker --trigger=generate-libraries-pr || true

banner "Creating commits"
git commit -m"chore: update googleapis SHA circa $(date +%Y-%m-%d)" \
  bazel/google_cloud_cpp_deps.bzl cmake/GoogleapisConfig.cmake
git commit -m"Update the protodeps/protolists" \
  external/googleapis/protodeps external/googleapis/protolists
git commit -m"Regenerate libraries" .

banner "Showing git state"
git status --untracked-files=no
echo ""
git show-branch
