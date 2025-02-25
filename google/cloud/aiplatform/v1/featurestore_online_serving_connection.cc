// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/featurestore_online_service.proto

#include "google/cloud/aiplatform/v1/featurestore_online_serving_connection.h"
#include "google/cloud/aiplatform/v1/featurestore_online_serving_options.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeaturestoreOnlineServingServiceConnection::
    ~FeaturestoreOnlineServingServiceConnection() = default;

StatusOr<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceConnection::ReadFeatureValues(
    google::cloud::aiplatform::v1::ReadFeatureValuesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceConnection::StreamingReadFeatureValues(
    google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest const&) {
  return google::cloud::internal::MakeStreamRange<
      google::cloud::aiplatform::v1::ReadFeatureValuesResponse>(
      []() -> absl::variant<
               Status,
               google::cloud::aiplatform::v1::ReadFeatureValuesResponse> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

StatusOr<google::cloud::aiplatform::v1::WriteFeatureValuesResponse>
FeaturestoreOnlineServingServiceConnection::WriteFeatureValues(
    google::cloud::aiplatform::v1::WriteFeatureValuesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<FeaturestoreOnlineServingServiceConnection>
MakeFeaturestoreOnlineServingServiceConnection(std::string const& location,
                                               Options options) {
  internal::CheckExpectedOptions<
      CommonOptionList, GrpcOptionList, UnifiedCredentialsOptionList,
      FeaturestoreOnlineServingServicePolicyOptionList>(options, __func__);
  options =
      aiplatform_v1_internal::FeaturestoreOnlineServingServiceDefaultOptions(
          location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      aiplatform_v1_internal::CreateDefaultFeaturestoreOnlineServingServiceStub(
          background->cq(), options);
  return aiplatform_v1_internal::
      MakeFeaturestoreOnlineServingServiceTracingConnection(
          std::make_shared<aiplatform_v1_internal::
                               FeaturestoreOnlineServingServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
