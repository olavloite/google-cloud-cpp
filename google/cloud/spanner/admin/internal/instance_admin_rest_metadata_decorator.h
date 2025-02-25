// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_REST_METADATA_DECORATOR_H

#include "google/cloud/spanner/admin/internal/instance_admin_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <google/spanner/admin/instance/v1/spanner_instance_admin.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceAdminRestMetadata : public InstanceAdminRestStub {
 public:
  ~InstanceAdminRestMetadata() override = default;
  explicit InstanceAdminRestMetadata(
      std::shared_ptr<InstanceAdminRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
  ListInstanceConfigs(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
          request) override;

  StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request) override;

  google::cloud::future<StatusOr<google::longrunning::Operation>>
  AsyncCreateInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request) override;

  google::cloud::future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request) override;

  Status DeleteInstanceConfig(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
          request) override;

  StatusOr<google::spanner::admin::instance::v1::
               ListInstanceConfigOperationsResponse>
  ListInstanceConfigOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::
          ListInstanceConfigOperationsRequest const& request) override;

  StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
  ListInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::ListInstancesRequest const& request)
      override;

  StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::GetInstanceRequest const& request)
      override;

  google::cloud::future<StatusOr<google::longrunning::Operation>>
  AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request) override;

  google::cloud::future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request) override;

  Status DeleteInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::longrunning::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::longrunning::GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<InstanceAdminRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_REST_METADATA_DECORATOR_H
