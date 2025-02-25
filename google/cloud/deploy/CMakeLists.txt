# ~~~
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
# ~~~

include(GoogleCloudCppLibrary)

set(GOOGLE_CLOUD_CPP_SERVICE_DIRS "" "v1/")

google_cloud_cpp_add_ga_grpc_library(deploy "Google Cloud Deploy API")

if (BUILD_TESTING AND GOOGLE_CLOUD_CPP_ENABLE_CXX_EXCEPTIONS)
    add_executable(deploy_quickstart "quickstart/quickstart.cc")
    target_link_libraries(deploy_quickstart PRIVATE google-cloud-cpp::deploy)
    google_cloud_cpp_add_common_options(deploy_quickstart)
    add_test(
        NAME deploy_quickstart
        COMMAND
            cmake -P "${PROJECT_SOURCE_DIR}/cmake/quickstart-runner.cmake"
            $<TARGET_FILE:deploy_quickstart> GOOGLE_CLOUD_PROJECT
            GOOGLE_CLOUD_CPP_TEST_REGION)
    set_tests_properties(deploy_quickstart
                         PROPERTIES LABELS "integration-test;quickstart")
endif ()
