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

#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultNetworkEndpointGroupsRestStub::DefaultNetworkEndpointGroupsRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultNetworkEndpointGroupsRestStub::DefaultNetworkEndpointGroupsRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
DefaultNetworkEndpointGroupsRestStub::AggregatedListNetworkEndpointGroups(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AggregatedListNetworkEndpointGroupsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "aggregated", "/",
                   "networkEndpointGroups"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("include_all_scopes",
                      request.include_all_scopes() ? "1" : "0"),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkEndpointGroupsRestStub::AsyncAttachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request.network_endpoint_groups_attach_endpoints_request_resource(),
            absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                         request.project(), "/", "zones", "/", request.zone(),
                         "/", "networkEndpointGroups", "/",
                         request.network_endpoint_group(), "/",
                         "attachNetworkEndpoints")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkEndpointGroupsRestStub::AsyncDeleteNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "zones", "/",
                             request.zone(), "/", "networkEndpointGroups", "/",
                             request.network_endpoint_group())));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkEndpointGroupsRestStub::AsyncDetachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request.network_endpoint_groups_detach_endpoints_request_resource(),
            absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                         request.project(), "/", "zones", "/", request.zone(),
                         "/", "networkEndpointGroups", "/",
                         request.network_endpoint_group(), "/",
                         "detachNetworkEndpoints")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
DefaultNetworkEndpointGroupsRestStub::GetNetworkEndpointGroup(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NetworkEndpointGroup>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "zones", "/", request.zone(), "/",
                   "networkEndpointGroups", "/",
                   request.network_endpoint_group()),
      {});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkEndpointGroupsRestStub::AsyncInsertNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.network_endpoint_group_resource(),
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "zones", "/",
                             request.zone(), "/", "networkEndpointGroups")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
DefaultNetworkEndpointGroupsRestStub::ListNetworkEndpointGroups(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointGroupsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NetworkEndpointGroupList>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "zones", "/", request.zone(), "/",
                   "networkEndpointGroups"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

StatusOr<
    google::cloud::cpp::compute::v1::NetworkEndpointGroupsListNetworkEndpoints>
DefaultNetworkEndpointGroupsRestStub::ListNetworkEndpoints(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointsRequest const& request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::
                                 NetworkEndpointGroupsListNetworkEndpoints>(
      *service_, rest_context,
      request.network_endpoint_groups_list_endpoints_request_resource(),
      absl::StrCat(
          "/", "compute", "/", "v1", "/", "projects", "/", request.project(),
          "/", "zones", "/", request.zone(), "/", "networkEndpointGroups", "/",
          request.network_endpoint_group(), "/", "listNetworkEndpoints"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultNetworkEndpointGroupsRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        TestIamPermissionsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "zones", "/", request.zone(), "/",
                   "networkEndpointGroups", "/", request.resource(), "/",
                   "testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNetworkEndpointGroupsRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/operations/",
                             request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultNetworkEndpointGroupsRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request,
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google
