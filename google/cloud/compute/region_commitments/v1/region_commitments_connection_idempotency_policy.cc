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
// source: google/cloud/compute/region_commitments/v1/region_commitments.proto

#include "google/cloud/compute/region_commitments/v1/region_commitments_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_commitments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionCommitmentsConnectionIdempotencyPolicy::
    ~RegionCommitmentsConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionCommitmentsConnectionIdempotencyPolicy>
RegionCommitmentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionCommitmentsConnectionIdempotencyPolicy>(*this);
}

Idempotency
RegionCommitmentsConnectionIdempotencyPolicy::AggregatedListRegionCommitments(
    google::cloud::cpp::compute::region_commitments::v1::
        AggregatedListRegionCommitmentsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionCommitmentsConnectionIdempotencyPolicy::GetCommitment(
    google::cloud::cpp::compute::region_commitments::v1::
        GetCommitmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionCommitmentsConnectionIdempotencyPolicy::InsertCommitment(
    google::cloud::cpp::compute::region_commitments::v1::
        InsertCommitmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionCommitmentsConnectionIdempotencyPolicy::ListRegionCommitments(
    google::cloud::cpp::compute::region_commitments::v1::
        ListRegionCommitmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionCommitmentsConnectionIdempotencyPolicy::UpdateCommitment(
    google::cloud::cpp::compute::region_commitments::v1::
        UpdateCommitmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionCommitmentsConnectionIdempotencyPolicy>
MakeDefaultRegionCommitmentsConnectionIdempotencyPolicy() {
  return std::make_unique<RegionCommitmentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_commitments_v1
}  // namespace cloud
}  // namespace google
