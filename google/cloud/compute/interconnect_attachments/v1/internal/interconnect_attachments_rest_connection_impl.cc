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

#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_rest_connection_impl.h"
#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectAttachmentsRestConnectionImpl::
    InterconnectAttachmentsRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_interconnect_attachments_v1_internal::
                            InterconnectAttachmentsRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), InterconnectAttachmentsConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
InterconnectAttachmentsRestConnectionImpl::
    AggregatedListInterconnectAttachments(
        google::cloud::cpp::compute::interconnect_attachments::v1::
            AggregatedListInterconnectAttachmentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AggregatedListInterconnectAttachments(
          request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::interconnect_attachments::v1::
                 AggregatedListInterconnectAttachmentsRequest const& request) {
        return stub_->AggregatedListInterconnectAttachments(rest_context,
                                                            request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestConnectionImpl::DeleteInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::interconnect_attachments::v1::
                         DeleteInterconnectAttachmentRequest const& request) {
        return stub->AsyncDeleteInterconnectAttachment(cq, std::move(context),
                                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInterconnectAttachment(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsRestConnectionImpl::GetInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        GetInterconnectAttachmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInterconnectAttachment(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::interconnect_attachments::v1::
                 GetInterconnectAttachmentRequest const& request) {
        return stub_->GetInterconnectAttachment(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestConnectionImpl::InsertInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::interconnect_attachments::v1::
                         InsertInterconnectAttachmentRequest const& request) {
        return stub->AsyncInsertInterconnectAttachment(cq, std::move(context),
                                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertInterconnectAttachment(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsRestConnectionImpl::ListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        ListInterconnectAttachmentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListInterconnectAttachments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_interconnect_attachments_v1::
                                   InterconnectAttachmentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::interconnect_attachments::v1::
              ListInterconnectAttachmentsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::interconnect_attachments::v1::
                       ListInterconnectAttachmentsRequest const& request) {
              return stub->ListInterconnectAttachments(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::InterconnectAttachmentList r) {
        std::vector<google::cloud::cpp::compute::v1::InterconnectAttachment>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestConnectionImpl::PatchInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::interconnect_attachments::v1::
                         PatchInterconnectAttachmentRequest const& request) {
        return stub->AsyncPatchInterconnectAttachment(cq, std::move(context),
                                                      request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchInterconnectAttachment(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsRestConnectionImpl::SetLabels(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::interconnect_attachments::v1::
                         SetLabelsRequest const& request) {
        return stub->AsyncSetLabels(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetLabels(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_internal
}  // namespace cloud
}  // namespace google
