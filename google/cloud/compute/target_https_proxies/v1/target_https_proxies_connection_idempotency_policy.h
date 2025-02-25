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
// source:
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_TARGET_HTTPS_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_TARGET_HTTPS_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_https_proxies/v1/target_https_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetHttpsProxiesConnectionIdempotencyPolicy {
 public:
  virtual ~TargetHttpsProxiesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TargetHttpsProxiesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListTargetHttpsProxies(
      google::cloud::cpp::compute::target_https_proxies::v1::
          AggregatedListTargetHttpsProxiesRequest const& request);

  virtual google::cloud::Idempotency DeleteTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          DeleteTargetHttpsProxyRequest const& request);

  virtual google::cloud::Idempotency GetTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          GetTargetHttpsProxyRequest const& request);

  virtual google::cloud::Idempotency InsertTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          InsertTargetHttpsProxyRequest const& request);

  virtual google::cloud::Idempotency ListTargetHttpsProxies(
      google::cloud::cpp::compute::target_https_proxies::v1::
          ListTargetHttpsProxiesRequest request);

  virtual google::cloud::Idempotency PatchTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          PatchTargetHttpsProxyRequest const& request);

  virtual google::cloud::Idempotency SetCertificateMap(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetCertificateMapRequest const& request);

  virtual google::cloud::Idempotency SetQuicOverride(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetQuicOverrideRequest const& request);

  virtual google::cloud::Idempotency SetSslCertificates(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetSslCertificatesRequest const& request);

  virtual google::cloud::Idempotency SetSslPolicy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetSslPolicyRequest const& request);

  virtual google::cloud::Idempotency SetUrlMap(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetUrlMapRequest const& request);
};

std::unique_ptr<TargetHttpsProxiesConnectionIdempotencyPolicy>
MakeDefaultTargetHttpsProxiesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_TARGET_HTTPS_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H
