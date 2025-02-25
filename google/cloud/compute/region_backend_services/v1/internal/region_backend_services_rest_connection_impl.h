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
// source:
// google/cloud/compute/region_backend_services/v1/region_backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_rest_stub.h"
#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_retry_traits.h"
#include "google/cloud/compute/region_backend_services/v1/region_backend_services_connection.h"
#include "google/cloud/compute/region_backend_services/v1/region_backend_services_connection_idempotency_policy.h"
#include "google/cloud/compute/region_backend_services/v1/region_backend_services_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionBackendServicesRestConnectionImpl
    : public compute_region_backend_services_v1::
          RegionBackendServicesConnection {
 public:
  ~RegionBackendServicesRestConnectionImpl() override = default;

  RegionBackendServicesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_region_backend_services_v1_internal::
                          RegionBackendServicesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendService(
      google::cloud::cpp::compute::region_backend_services::v1::
          DeleteBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendService> GetBackendService(
      google::cloud::cpp::compute::region_backend_services::v1::
          GetBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(google::cloud::cpp::compute::region_backend_services::v1::
                GetHealthRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::region_backend_services::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendService(
      google::cloud::cpp::compute::region_backend_services::v1::
          InsertBackendServiceRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::BackendService>
  ListRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          ListRegionBackendServicesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendService(google::cloud::cpp::compute::region_backend_services::v1::
                          PatchBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::region_backend_services::v1::
          SetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendService(
      google::cloud::cpp::compute::region_backend_services::v1::
          UpdateBackendServiceRequest const& request) override;

 private:
  static std::unique_ptr<
      compute_region_backend_services_v1::RegionBackendServicesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_region_backend_services_v1::
                 RegionBackendServicesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_region_backend_services_v1::
                 RegionBackendServicesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_region_backend_services_v1::
                             RegionBackendServicesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_region_backend_services_v1::
                 RegionBackendServicesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_region_backend_services_v1::
                 RegionBackendServicesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_backend_services_v1_internal::
                      RegionBackendServicesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_backend_services_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_REST_CONNECTION_IMPL_H
