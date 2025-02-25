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
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InterconnectAttachmentsRestMetadata
    : public InterconnectAttachmentsRestStub {
 public:
  ~InterconnectAttachmentsRestMetadata() override = default;
  explicit InterconnectAttachmentsRestMetadata(
      std::shared_ptr<InterconnectAttachmentsRestStub> child,
      std::string api_client_header = "");

  StatusOr<
      google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
  AggregatedListInterconnectAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          AggregatedListInterconnectAttachmentsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
  GetInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          GetInterconnectAttachmentRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentList>
  ListInterconnectAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          ListInterconnectAttachmentsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<InterconnectAttachmentsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_METADATA_DECORATOR_H
