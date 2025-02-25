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
// source: google/cloud/compute/projects/v1/projects.proto

#include "google/cloud/compute/projects/v1/projects_connection.h"
#include "google/cloud/compute/projects/v1/internal/projects_option_defaults.h"
#include "google/cloud/compute/projects/v1/internal/projects_tracing_connection.h"
#include "google/cloud/compute/projects/v1/projects_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_projects_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProjectsConnection::~ProjectsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::DisableXpnHost(
    google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::DisableXpnResource(
    google::cloud::cpp::compute::projects::v1::
        DisableXpnResourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::EnableXpnHost(
    google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::EnableXpnResource(google::cloud::cpp::compute::projects::
                                          v1::EnableXpnResourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Project>
ProjectsConnection::GetProject(
    google::cloud::cpp::compute::projects::v1::GetProjectRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Project>
ProjectsConnection::GetXpnHost(
    google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>
ProjectsConnection::GetXpnResources(
    google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cpp::compute::v1::Project>
ProjectsConnection::ListXpnHosts(
    google::cloud::cpp::compute::projects::v1::
        ListXpnHostsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Project>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::MoveDisk(
    google::cloud::cpp::compute::projects::v1::MoveDiskRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::MoveInstance(
    google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::SetCommonInstanceMetadata(
    google::cloud::cpp::compute::projects::v1::
        SetCommonInstanceMetadataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::SetDefaultNetworkTier(
    google::cloud::cpp::compute::projects::v1::
        SetDefaultNetworkTierRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsConnection::SetUsageExportBucket(
    google::cloud::cpp::compute::projects::v1::
        SetUsageExportBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_projects_v1
}  // namespace cloud
}  // namespace google
