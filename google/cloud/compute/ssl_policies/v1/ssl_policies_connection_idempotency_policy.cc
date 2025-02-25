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
// source: google/cloud/compute/ssl_policies/v1/ssl_policies.proto

#include "google/cloud/compute/ssl_policies/v1/ssl_policies_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SslPoliciesConnectionIdempotencyPolicy::
    ~SslPoliciesConnectionIdempotencyPolicy() = default;

std::unique_ptr<SslPoliciesConnectionIdempotencyPolicy>
SslPoliciesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SslPoliciesConnectionIdempotencyPolicy>(*this);
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::AggregatedListSslPolicies(
    google::cloud::cpp::compute::ssl_policies::v1::
        AggregatedListSslPoliciesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::DeleteSslPolicy(
    google::cloud::cpp::compute::ssl_policies::v1::
        DeleteSslPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::GetSslPolicy(
    google::cloud::cpp::compute::ssl_policies::v1::GetSslPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::InsertSslPolicy(
    google::cloud::cpp::compute::ssl_policies::v1::
        InsertSslPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::ListSslPolicies(
    google::cloud::cpp::compute::ssl_policies::v1::
        ListSslPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::ListAvailableFeatures(
    google::cloud::cpp::compute::ssl_policies::v1::
        ListAvailableFeaturesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SslPoliciesConnectionIdempotencyPolicy::PatchSslPolicy(
    google::cloud::cpp::compute::ssl_policies::v1::
        PatchSslPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<SslPoliciesConnectionIdempotencyPolicy>
MakeDefaultSslPoliciesConnectionIdempotencyPolicy() {
  return std::make_unique<SslPoliciesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_policies_v1
}  // namespace cloud
}  // namespace google
