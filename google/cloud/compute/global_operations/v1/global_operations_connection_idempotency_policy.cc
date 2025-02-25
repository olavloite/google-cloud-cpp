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

#include "google/cloud/compute/global_operations/v1/global_operations_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GlobalOperationsConnectionIdempotencyPolicy::
    ~GlobalOperationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<GlobalOperationsConnectionIdempotencyPolicy>
GlobalOperationsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<GlobalOperationsConnectionIdempotencyPolicy>(*this);
}

Idempotency
GlobalOperationsConnectionIdempotencyPolicy::AggregatedListGlobalOperations(
    google::cloud::cpp::compute::global_operations::v1::
        AggregatedListGlobalOperationsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GlobalOperationsConnectionIdempotencyPolicy::DeleteOperation(
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalOperationsConnectionIdempotencyPolicy::GetOperation(
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GlobalOperationsConnectionIdempotencyPolicy::ListGlobalOperations(
    google::cloud::cpp::compute::global_operations::v1::
        ListGlobalOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency GlobalOperationsConnectionIdempotencyPolicy::Wait(
    google::cloud::cpp::compute::global_operations::v1::WaitRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GlobalOperationsConnectionIdempotencyPolicy>
MakeDefaultGlobalOperationsConnectionIdempotencyPolicy() {
  return std::make_unique<GlobalOperationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_operations_v1
}  // namespace cloud
}  // namespace google
