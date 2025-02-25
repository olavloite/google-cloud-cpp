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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_connection_impl.h"
#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<gkemulticloud_v1::AzureClustersRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<gkemulticloud_v1::AzureClustersRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<gkemulticloud_v1::AzureClustersBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<gkemulticloud_v1::AzureClustersConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<gkemulticloud_v1::AzureClustersConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<gkemulticloud_v1::AzureClustersPollingPolicyOption>()
      ->clone();
}

}  // namespace

AzureClustersConnectionImpl::AzureClustersConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<gkemulticloud_v1_internal::AzureClustersStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AzureClustersConnection::options())) {}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
AzureClustersConnectionImpl::CreateAzureClient(
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AzureClient>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::CreateAzureClientRequest const&
              request) {
        return stub->AsyncCreateAzureClient(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::AzureClient>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAzureClient(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersConnectionImpl::GetAzureClient(
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAzureClient(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureClientRequest const&
                 request) { return stub_->GetAzureClient(context, request); },
      request, __func__);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersConnectionImpl::ListAzureClients(
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAzureClients(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AzureClient>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkemulticloud_v1::AzureClustersRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::gkemulticloud::v1::ListAzureClientsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::gkemulticloud::v1::ListAzureClientsRequest const&
                    request) {
              return stub->ListAzureClients(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkemulticloud::v1::ListAzureClientsResponse r) {
        std::vector<google::cloud::gkemulticloud::v1::AzureClient> result(
            r.azure_clients().size());
        auto& messages = *r.mutable_azure_clients();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersConnectionImpl::DeleteAzureClient(
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const&
              request) {
        return stub->AsyncDeleteAzureClient(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAzureClient(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersConnectionImpl::CreateAzureCluster(
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AzureCluster>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
              request) {
        return stub->AsyncCreateAzureCluster(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::AzureCluster>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAzureCluster(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersConnectionImpl::UpdateAzureCluster(
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AzureCluster>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
              request) {
        return stub->AsyncUpdateAzureCluster(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::AzureCluster>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateAzureCluster(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersConnectionImpl::GetAzureCluster(
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAzureCluster(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureClusterRequest const&
                 request) { return stub_->GetAzureCluster(context, request); },
      request, __func__);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersConnectionImpl::ListAzureClusters(
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAzureClusters(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AzureCluster>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkemulticloud_v1::AzureClustersRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::gkemulticloud::v1::ListAzureClustersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::gkemulticloud::v1::
                       ListAzureClustersRequest const& request) {
              return stub->ListAzureClusters(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkemulticloud::v1::ListAzureClustersResponse r) {
        std::vector<google::cloud::gkemulticloud::v1::AzureCluster> result(
            r.azure_clusters().size());
        auto& messages = *r.mutable_azure_clusters();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersConnectionImpl::DeleteAzureCluster(
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
              request) {
        return stub->AsyncDeleteAzureCluster(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAzureCluster(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
AzureClustersConnectionImpl::GenerateAzureAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateAzureAccessToken(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::
                 GenerateAzureAccessTokenRequest const& request) {
        return stub_->GenerateAzureAccessToken(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersConnectionImpl::CreateAzureNodePool(
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AzureNodePool>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
              request) {
        return stub->AsyncCreateAzureNodePool(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::AzureNodePool>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAzureNodePool(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersConnectionImpl::UpdateAzureNodePool(
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AzureNodePool>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
              request) {
        return stub->AsyncUpdateAzureNodePool(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::AzureNodePool>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateAzureNodePool(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersConnectionImpl::GetAzureNodePool(
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAzureNodePool(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const&
                 request) { return stub_->GetAzureNodePool(context, request); },
      request, __func__);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersConnectionImpl::ListAzureNodePools(
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAzureNodePools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkemulticloud_v1::AzureClustersRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::gkemulticloud::v1::
                       ListAzureNodePoolsRequest const& request) {
              return stub->ListAzureNodePools(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkemulticloud::v1::ListAzureNodePoolsResponse r) {
        std::vector<google::cloud::gkemulticloud::v1::AzureNodePool> result(
            r.azure_node_pools().size());
        auto& messages = *r.mutable_azure_node_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersConnectionImpl::DeleteAzureNodePool(
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
              request) {
        return stub->AsyncDeleteAzureNodePool(cq, std::move(context), request);
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
          google::cloud::gkemulticloud::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAzureNodePool(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
AzureClustersConnectionImpl::GetAzureServerConfig(
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAzureServerConfig(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
              request) {
        return stub_->GetAzureServerConfig(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
