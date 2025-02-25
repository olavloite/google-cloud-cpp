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
// source: google/cloud/osconfig/v1/osconfig_zonal_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_zonal_connection_impl.h"
#include "google/cloud/osconfig/v1/internal/os_config_zonal_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<osconfig_v1::OsConfigZonalServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<osconfig_v1::OsConfigZonalServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<osconfig_v1::OsConfigZonalServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<osconfig_v1::OsConfigZonalServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<osconfig_v1::OsConfigZonalServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<osconfig_v1::OsConfigZonalServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

OsConfigZonalServiceConnectionImpl::OsConfigZonalServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<osconfig_v1_internal::OsConfigZonalServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), OsConfigZonalServiceConnection::options())) {}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceConnectionImpl::CreateOSPolicyAssignment(
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::osconfig::v1::OSPolicyAssignment>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
              request) {
        return stub->AsyncCreateOSPolicyAssignment(cq, std::move(context),
                                                   request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::osconfig::v1::OSPolicyAssignment>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateOSPolicyAssignment(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>>
OsConfigZonalServiceConnectionImpl::UpdateOSPolicyAssignment(
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::osconfig::v1::OSPolicyAssignment>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
              request) {
        return stub->AsyncUpdateOSPolicyAssignment(cq, std::move(context),
                                                   request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::osconfig::v1::OSPolicyAssignment>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateOSPolicyAssignment(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceConnectionImpl::GetOSPolicyAssignment(
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOSPolicyAssignment(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const&
                 request) {
        return stub_->GetOSPolicyAssignment(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceConnectionImpl::ListOSPolicyAssignments(
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListOSPolicyAssignments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<osconfig_v1::OsConfigZonalServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::osconfig::v1::
                       ListOSPolicyAssignmentsRequest const& request) {
              return stub->ListOSPolicyAssignments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse r) {
        std::vector<google::cloud::osconfig::v1::OSPolicyAssignment> result(
            r.os_policy_assignments().size());
        auto& messages = *r.mutable_os_policy_assignments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceConnectionImpl::ListOSPolicyAssignmentRevisions(
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListOSPolicyAssignmentRevisions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::OSPolicyAssignment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<osconfig_v1::OsConfigZonalServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::osconfig::v1::
              ListOSPolicyAssignmentRevisionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::osconfig::v1::
                       ListOSPolicyAssignmentRevisionsRequest const& request) {
              return stub->ListOSPolicyAssignmentRevisions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse
             r) {
        std::vector<google::cloud::osconfig::v1::OSPolicyAssignment> result(
            r.os_policy_assignments().size());
        auto& messages = *r.mutable_os_policy_assignments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<
    StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentOperationMetadata>>
OsConfigZonalServiceConnectionImpl::DeleteOSPolicyAssignment(
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::osconfig::v1::OSPolicyAssignmentOperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
              request) {
        return stub->AsyncDeleteOSPolicyAssignment(cq, std::move(context),
                                                   request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::osconfig::v1::OSPolicyAssignmentOperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteOSPolicyAssignment(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceConnectionImpl::GetOSPolicyAssignmentReport(
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOSPolicyAssignmentReport(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
              request) {
        return stub_->GetOSPolicyAssignmentReport(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceConnectionImpl::ListOSPolicyAssignmentReports(
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListOSPolicyAssignmentReports(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::OSPolicyAssignmentReport>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<osconfig_v1::OsConfigZonalServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::osconfig::v1::
              ListOSPolicyAssignmentReportsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::osconfig::v1::
                       ListOSPolicyAssignmentReportsRequest const& request) {
              return stub->ListOSPolicyAssignmentReports(context, request);
            },
            r, function_name);
      },
      [](google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse r) {
        std::vector<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
            result(r.os_policy_assignment_reports().size());
        auto& messages = *r.mutable_os_policy_assignment_reports();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceConnectionImpl::GetInventory(
    google::cloud::osconfig::v1::GetInventoryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInventory(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::GetInventoryRequest const& request) {
        return stub_->GetInventory(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceConnectionImpl::ListInventories(
    google::cloud::osconfig::v1::ListInventoriesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInventories(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::Inventory>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<osconfig_v1::OsConfigZonalServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::osconfig::v1::ListInventoriesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::osconfig::v1::ListInventoriesRequest const&
                       request) {
              return stub->ListInventories(context, request);
            },
            r, function_name);
      },
      [](google::cloud::osconfig::v1::ListInventoriesResponse r) {
        std::vector<google::cloud::osconfig::v1::Inventory> result(
            r.inventories().size());
        auto& messages = *r.mutable_inventories();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceConnectionImpl::GetVulnerabilityReport(
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVulnerabilityReport(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::GetVulnerabilityReportRequest const&
                 request) {
        return stub_->GetVulnerabilityReport(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceConnectionImpl::ListVulnerabilityReports(
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListVulnerabilityReports(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::VulnerabilityReport>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<osconfig_v1::OsConfigZonalServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::osconfig::v1::
                       ListVulnerabilityReportsRequest const& request) {
              return stub->ListVulnerabilityReports(context, request);
            },
            r, function_name);
      },
      [](google::cloud::osconfig::v1::ListVulnerabilityReportsResponse r) {
        std::vector<google::cloud::osconfig::v1::VulnerabilityReport> result(
            r.vulnerability_reports().size());
        auto& messages = *r.mutable_vulnerability_reports();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
