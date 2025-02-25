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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_INTERNAL_REGION_COMMITMENTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_INTERNAL_REGION_COMMITMENTS_TRACING_CONNECTION_H

#include "google/cloud/compute/region_commitments/v1/region_commitments_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_commitments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionCommitmentsTracingConnection
    : public compute_region_commitments_v1::RegionCommitmentsConnection {
 public:
  ~RegionCommitmentsTracingConnection() override = default;

  explicit RegionCommitmentsTracingConnection(
      std::shared_ptr<
          compute_region_commitments_v1::RegionCommitmentsConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::CommitmentAggregatedList>
  AggregatedListRegionCommitments(
      google::cloud::cpp::compute::region_commitments::v1::
          AggregatedListRegionCommitmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Commitment> GetCommitment(
      google::cloud::cpp::compute::region_commitments::v1::
          GetCommitmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertCommitment(
      google::cloud::cpp::compute::region_commitments::v1::
          InsertCommitmentRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Commitment>
  ListRegionCommitments(google::cloud::cpp::compute::region_commitments::v1::
                            ListRegionCommitmentsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateCommitment(
      google::cloud::cpp::compute::region_commitments::v1::
          UpdateCommitmentRequest const& request) override;

 private:
  std::shared_ptr<compute_region_commitments_v1::RegionCommitmentsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_region_commitments_v1::RegionCommitmentsConnection>
MakeRegionCommitmentsTracingConnection(
    std::shared_ptr<compute_region_commitments_v1::RegionCommitmentsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_commitments_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_INTERNAL_REGION_COMMITMENTS_TRACING_CONNECTION_H
