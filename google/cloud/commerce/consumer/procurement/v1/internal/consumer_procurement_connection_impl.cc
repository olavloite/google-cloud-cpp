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
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_connection_impl.h"
#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<
    commerce_consumer_procurement_v1::ConsumerProcurementServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<commerce_consumer_procurement_v1::
                    ConsumerProcurementServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<commerce_consumer_procurement_v1::
               ConsumerProcurementServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

ConsumerProcurementServiceConnectionImpl::
    ConsumerProcurementServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<commerce_consumer_procurement_v1_internal::
                            ConsumerProcurementServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          ConsumerProcurementServiceConnection::options())) {}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceConnectionImpl::PlaceOrder(
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      background_->cq(), request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::commerce::consumer::procurement::v1::
                         PlaceOrderRequest const& request) {
        return stub->AsyncPlaceOrder(cq, std::move(context), request);
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
          google::cloud::commerce::consumer::procurement::v1::Order>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PlaceOrder(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceConnectionImpl::GetOrder(
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOrder(request),
      [this](grpc::ClientContext& context,
             google::cloud::commerce::consumer::procurement::v1::
                 GetOrderRequest const& request) {
        return stub_->GetOrder(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceConnectionImpl::ListOrders(
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOrders(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<commerce_consumer_procurement_v1::
                                   ConsumerProcurementServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::commerce::consumer::procurement::v1::
              ListOrdersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::commerce::consumer::procurement::v1::
                       ListOrdersRequest const& request) {
              return stub->ListOrders(context, request);
            },
            r, function_name);
      },
      [](google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse
             r) {
        std::vector<google::cloud::commerce::consumer::procurement::v1::Order>
            result(r.orders().size());
        auto& messages = *r.mutable_orders();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
