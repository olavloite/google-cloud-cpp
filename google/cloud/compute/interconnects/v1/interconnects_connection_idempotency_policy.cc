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
// source: google/cloud/compute/interconnects/v1/interconnects.proto

#include "google/cloud/compute/interconnects/v1/interconnects_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnects_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InterconnectsConnectionIdempotencyPolicy::
    ~InterconnectsConnectionIdempotencyPolicy() = default;

std::unique_ptr<InterconnectsConnectionIdempotencyPolicy>
InterconnectsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InterconnectsConnectionIdempotencyPolicy>(*this);
}

Idempotency InterconnectsConnectionIdempotencyPolicy::DeleteInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        DeleteInterconnectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InterconnectsConnectionIdempotencyPolicy::GetInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        GetInterconnectRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InterconnectsConnectionIdempotencyPolicy::GetDiagnostics(
    google::cloud::cpp::compute::interconnects::v1::
        GetDiagnosticsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InterconnectsConnectionIdempotencyPolicy::InsertInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        InsertInterconnectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InterconnectsConnectionIdempotencyPolicy::ListInterconnects(
    google::cloud::cpp::compute::interconnects::v1::
        ListInterconnectsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InterconnectsConnectionIdempotencyPolicy::PatchInterconnect(
    google::cloud::cpp::compute::interconnects::v1::
        PatchInterconnectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InterconnectsConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<InterconnectsConnectionIdempotencyPolicy>
MakeDefaultInterconnectsConnectionIdempotencyPolicy() {
  return std::make_unique<InterconnectsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnects_v1
}  // namespace cloud
}  // namespace google
