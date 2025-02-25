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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/autoscalers_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AutoscalersConnectionIdempotencyPolicy::
    ~AutoscalersConnectionIdempotencyPolicy() = default;

std::unique_ptr<AutoscalersConnectionIdempotencyPolicy>
AutoscalersConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<AutoscalersConnectionIdempotencyPolicy>(*this);
}

Idempotency AutoscalersConnectionIdempotencyPolicy::AggregatedListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AutoscalersConnectionIdempotencyPolicy::DeleteAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::
        DeleteAutoscalerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AutoscalersConnectionIdempotencyPolicy::GetAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AutoscalersConnectionIdempotencyPolicy::InsertAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::
        InsertAutoscalerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AutoscalersConnectionIdempotencyPolicy::ListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        ListAutoscalersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AutoscalersConnectionIdempotencyPolicy::PatchAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::
        PatchAutoscalerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AutoscalersConnectionIdempotencyPolicy::UpdateAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::
        UpdateAutoscalerRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<AutoscalersConnectionIdempotencyPolicy>
MakeDefaultAutoscalersConnectionIdempotencyPolicy() {
  return std::make_unique<AutoscalersConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1
}  // namespace cloud
}  // namespace google
