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
// source: google/cloud/resourcemanager/v3/tag_values.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/resourcemanager/v3/tag_values.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TagValuesStub {
 public:
  virtual ~TagValuesStub() = 0;

  virtual StatusOr<google::cloud::resourcemanager::v3::ListTagValuesResponse>
  ListTagValues(grpc::ClientContext& context,
                google::cloud::resourcemanager::v3::ListTagValuesRequest const&
                    request) = 0;

  virtual StatusOr<google::cloud::resourcemanager::v3::TagValue> GetTagValue(
      grpc::ClientContext& context,
      google::cloud::resourcemanager::v3::GetTagValueRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::resourcemanager::v3::TagValue>
  GetNamespacedTagValue(
      grpc::ClientContext& context,
      google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::CreateTagValueRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::UpdateTagValueRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::DeleteTagValueRequest const&
          request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultTagValuesStub : public TagValuesStub {
 public:
  DefaultTagValuesStub(
      std::unique_ptr<
          google::cloud::resourcemanager::v3::TagValues::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::resourcemanager::v3::ListTagValuesResponse>
  ListTagValues(grpc::ClientContext& client_context,
                google::cloud::resourcemanager::v3::ListTagValuesRequest const&
                    request) override;

  StatusOr<google::cloud::resourcemanager::v3::TagValue> GetTagValue(
      grpc::ClientContext& client_context,
      google::cloud::resourcemanager::v3::GetTagValueRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagValue> GetNamespacedTagValue(
      grpc::ClientContext& client_context,
      google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::CreateTagValueRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTagValue(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::resourcemanager::v3::TagValues::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_STUB_H
