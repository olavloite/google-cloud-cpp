// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#include "google/cloud/videointelligence/v1/internal/video_intelligence_option_defaults.h"
#include "google/cloud/videointelligence/v1/video_intelligence_connection.h"
#include "google/cloud/videointelligence/v1/video_intelligence_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace videointelligence_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options VideoIntelligenceServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_VIDEO_INTELLIGENCE_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_VIDEO_INTELLIGENCE_SERVICE_AUTHORITY",
      "videointelligence.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<
          videointelligence_v1::VideoIntelligenceServiceRetryPolicyOption>()) {
    options.set<
        videointelligence_v1::VideoIntelligenceServiceRetryPolicyOption>(
        videointelligence_v1::VideoIntelligenceServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<videointelligence_v1::
                       VideoIntelligenceServiceBackoffPolicyOption>()) {
    options
        .set<videointelligence_v1::VideoIntelligenceServiceBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<videointelligence_v1::
                       VideoIntelligenceServicePollingPolicyOption>()) {
    options
        .set<videointelligence_v1::VideoIntelligenceServicePollingPolicyOption>(
            GenericPollingPolicy<
                videointelligence_v1::
                    VideoIntelligenceServiceRetryPolicyOption::Type,
                videointelligence_v1::
                    VideoIntelligenceServiceBackoffPolicyOption::Type>(
                options
                    .get<videointelligence_v1::
                             VideoIntelligenceServiceRetryPolicyOption>()
                    ->clone(),
                ExponentialBackoffPolicy(std::chrono::seconds(1),
                                         std::chrono::minutes(5),
                                         kBackoffScaling)
                    .clone())
                .clone());
  }
  if (!options.has<
          videointelligence_v1::
              VideoIntelligenceServiceConnectionIdempotencyPolicyOption>()) {
    options.set<videointelligence_v1::
                    VideoIntelligenceServiceConnectionIdempotencyPolicyOption>(
        videointelligence_v1::
            MakeDefaultVideoIntelligenceServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_v1_internal
}  // namespace cloud
}  // namespace google
