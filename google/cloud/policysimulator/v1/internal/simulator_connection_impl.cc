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
// source: google/cloud/policysimulator/v1/simulator.proto

#include "google/cloud/policysimulator/v1/internal/simulator_connection_impl.h"
#include "google/cloud/policysimulator/v1/internal/simulator_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace policysimulator_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<policysimulator_v1::SimulatorRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<policysimulator_v1::SimulatorRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<policysimulator_v1::SimulatorBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<policysimulator_v1::SimulatorConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<policysimulator_v1::SimulatorConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<policysimulator_v1::SimulatorPollingPolicyOption>()
      ->clone();
}

}  // namespace

SimulatorConnectionImpl::SimulatorConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<policysimulator_v1_internal::SimulatorStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SimulatorConnection::options())) {}

StatusOr<google::cloud::policysimulator::v1::Replay>
SimulatorConnectionImpl::GetReplay(
    google::cloud::policysimulator::v1::GetReplayRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetReplay(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::policysimulator::v1::GetReplayRequest const& request) {
        return stub_->GetReplay(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::policysimulator::v1::Replay>>
SimulatorConnectionImpl::CreateReplay(
    google::cloud::policysimulator::v1::CreateReplayRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::policysimulator::v1::Replay>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::policysimulator::v1::CreateReplayRequest const&
              request) {
        return stub->AsyncCreateReplay(cq, std::move(context), request);
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
          google::cloud::policysimulator::v1::Replay>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateReplay(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::policysimulator::v1::ReplayResult>
SimulatorConnectionImpl::ListReplayResults(
    google::cloud::policysimulator::v1::ListReplayResultsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListReplayResults(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::policysimulator::v1::ReplayResult>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<policysimulator_v1::SimulatorRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::policysimulator::v1::ListReplayResultsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::policysimulator::v1::
                       ListReplayResultsRequest const& request) {
              return stub->ListReplayResults(context, request);
            },
            r, function_name);
      },
      [](google::cloud::policysimulator::v1::ListReplayResultsResponse r) {
        std::vector<google::cloud::policysimulator::v1::ReplayResult> result(
            r.replay_results().size());
        auto& messages = *r.mutable_replay_results();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policysimulator_v1_internal
}  // namespace cloud
}  // namespace google
