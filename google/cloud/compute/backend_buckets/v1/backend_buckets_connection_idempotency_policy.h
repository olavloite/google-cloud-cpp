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
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_BACKEND_BUCKETS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_BACKEND_BUCKETS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/backend_buckets/v1/backend_buckets.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackendBucketsConnectionIdempotencyPolicy {
 public:
  virtual ~BackendBucketsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<BackendBucketsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AddSignedUrlKey(
      google::cloud::cpp::compute::backend_buckets::v1::
          AddSignedUrlKeyRequest const& request);

  virtual google::cloud::Idempotency DeleteBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          DeleteBackendBucketRequest const& request);

  virtual google::cloud::Idempotency DeleteSignedUrlKey(
      google::cloud::cpp::compute::backend_buckets::v1::
          DeleteSignedUrlKeyRequest const& request);

  virtual google::cloud::Idempotency GetBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          GetBackendBucketRequest const& request);

  virtual google::cloud::Idempotency InsertBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          InsertBackendBucketRequest const& request);

  virtual google::cloud::Idempotency ListBackendBuckets(
      google::cloud::cpp::compute::backend_buckets::v1::
          ListBackendBucketsRequest request);

  virtual google::cloud::Idempotency PatchBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          PatchBackendBucketRequest const& request);

  virtual google::cloud::Idempotency SetEdgeSecurityPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          SetEdgeSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency UpdateBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          UpdateBackendBucketRequest const& request);
};

std::unique_ptr<BackendBucketsConnectionIdempotencyPolicy>
MakeDefaultBackendBucketsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_BACKEND_BUCKETS_CONNECTION_IDEMPOTENCY_POLICY_H
