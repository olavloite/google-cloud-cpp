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
// source: google/cloud/compute/global_operations/v1/global_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_OPERATIONS_V1_INTERNAL_GLOBAL_OPERATIONS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_OPERATIONS_V1_INTERNAL_GLOBAL_OPERATIONS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_operations/v1/global_operations_connection.h"
#include "google/cloud/compute/global_operations/v1/global_operations_connection_idempotency_policy.h"
#include "google/cloud/compute/global_operations/v1/global_operations_options.h"
#include "google/cloud/compute/global_operations/v1/internal/global_operations_rest_stub.h"
#include "google/cloud/compute/global_operations/v1/internal/global_operations_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalOperationsRestConnectionImpl
    : public compute_global_operations_v1::GlobalOperationsConnection {
 public:
  ~GlobalOperationsRestConnectionImpl() override = default;

  GlobalOperationsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_global_operations_v1_internal::GlobalOperationsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::OperationAggregatedList>
  AggregatedListGlobalOperations(
      google::cloud::cpp::compute::global_operations::v1::
          AggregatedListGlobalOperationsRequest const& request) override;

  Status DeleteOperation(google::cloud::cpp::compute::global_operations::v1::
                             DeleteOperationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> GetOperation(
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Operation> ListGlobalOperations(
      google::cloud::cpp::compute::global_operations::v1::
          ListGlobalOperationsRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Wait(
      google::cloud::cpp::compute::global_operations::v1::WaitRequest const&
          request) override;

 private:
  static std::unique_ptr<
      compute_global_operations_v1::GlobalOperationsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_global_operations_v1::GlobalOperationsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<
            compute_global_operations_v1::GlobalOperationsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_global_operations_v1::GlobalOperationsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_global_operations_v1::
                 GlobalOperationsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_global_operations_v1_internal::GlobalOperationsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_operations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_OPERATIONS_V1_INTERNAL_GLOBAL_OPERATIONS_REST_CONNECTION_IMPL_H
