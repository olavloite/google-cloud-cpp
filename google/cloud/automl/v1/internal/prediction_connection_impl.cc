// Copyright 2022 Google LLC
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
// source: google/cloud/automl/v1/prediction_service.proto

#include "google/cloud/automl/v1/internal/prediction_connection_impl.h"
#include "google/cloud/automl/v1/internal/prediction_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<automl_v1::PredictionServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<automl_v1::PredictionServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<automl_v1::PredictionServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<automl_v1::PredictionServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<automl_v1::PredictionServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<automl_v1::PredictionServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

PredictionServiceConnectionImpl::PredictionServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<automl_v1_internal::PredictionServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), PredictionServiceConnection::options())) {}

StatusOr<google::cloud::automl::v1::PredictResponse>
PredictionServiceConnectionImpl::Predict(
    google::cloud::automl::v1::PredictRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Predict(request),
      [this](grpc::ClientContext& context,
             google::cloud::automl::v1::PredictRequest const& request) {
        return stub_->Predict(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::automl::v1::BatchPredictResult>>
PredictionServiceConnectionImpl::BatchPredict(
    google::cloud::automl::v1::BatchPredictRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::automl::v1::BatchPredictResult>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::automl::v1::BatchPredictRequest const& request) {
        return stub->AsyncBatchPredict(cq, std::move(context), request);
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
          google::cloud::automl::v1::BatchPredictResult>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchPredict(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google
