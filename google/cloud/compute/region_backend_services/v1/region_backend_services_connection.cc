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

#include "google/cloud/compute/region_backend_services/v1/region_backend_services_connection.h"
#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_option_defaults.h"
#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_tracing_connection.h"
#include "google/cloud/compute/region_backend_services/v1/region_backend_services_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionBackendServicesConnection::~RegionBackendServicesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesConnection::DeleteBackendService(
    google::cloud::cpp::compute::region_backend_services::v1::
        DeleteBackendServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::BackendService>
RegionBackendServicesConnection::GetBackendService(
    google::cloud::cpp::compute::region_backend_services::v1::
        GetBackendServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
RegionBackendServicesConnection::GetHealth(
    google::cloud::cpp::compute::region_backend_services::v1::
        GetHealthRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionBackendServicesConnection::GetIamPolicy(
    google::cloud::cpp::compute::region_backend_services::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesConnection::InsertBackendService(
    google::cloud::cpp::compute::region_backend_services::v1::
        InsertBackendServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::BackendService>
RegionBackendServicesConnection::ListRegionBackendServices(
    google::cloud::cpp::compute::region_backend_services::v1::
        ListRegionBackendServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::BackendService>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesConnection::PatchBackendService(
    google::cloud::cpp::compute::region_backend_services::v1::
        PatchBackendServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionBackendServicesConnection::SetIamPolicy(
    google::cloud::cpp::compute::region_backend_services::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesConnection::UpdateBackendService(
    google::cloud::cpp::compute::region_backend_services::v1::
        UpdateBackendServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_backend_services_v1
}  // namespace cloud
}  // namespace google
