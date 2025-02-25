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
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection.h"
#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_option_defaults.h"
#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_tracing_connection.h"
#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkEndpointGroupsConnection::~NetworkEndpointGroupsConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
NetworkEndpointGroupsConnection::AggregatedListNetworkEndpointGroups(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AggregatedListNetworkEndpointGroupsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsConnection::AttachNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsConnection::DeleteNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsConnection::DetachNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
NetworkEndpointGroupsConnection::GetNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsConnection::InsertNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
NetworkEndpointGroupsConnection::ListNetworkEndpointGroups(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>>();
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
NetworkEndpointGroupsConnection::ListNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>>();
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkEndpointGroupsConnection::TestIamPermissions(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google
