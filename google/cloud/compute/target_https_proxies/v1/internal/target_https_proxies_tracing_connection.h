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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_INTERNAL_TARGET_HTTPS_PROXIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_INTERNAL_TARGET_HTTPS_PROXIES_TRACING_CONNECTION_H

#include "google/cloud/compute/target_https_proxies/v1/target_https_proxies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TargetHttpsProxiesTracingConnection
    : public compute_target_https_proxies_v1::TargetHttpsProxiesConnection {
 public:
  ~TargetHttpsProxiesTracingConnection() override = default;

  explicit TargetHttpsProxiesTracingConnection(
      std::shared_ptr<
          compute_target_https_proxies_v1::TargetHttpsProxiesConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
  AggregatedListTargetHttpsProxies(
      google::cloud::cpp::compute::target_https_proxies::v1::
          AggregatedListTargetHttpsProxiesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          DeleteTargetHttpsProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetTargetHttpsProxy(google::cloud::cpp::compute::target_https_proxies::v1::
                          GetTargetHttpsProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          InsertTargetHttpsProxyRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  ListTargetHttpsProxies(google::cloud::cpp::compute::target_https_proxies::v1::
                             ListTargetHttpsProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpsProxy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          PatchTargetHttpsProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCertificateMap(google::cloud::cpp::compute::target_https_proxies::v1::
                        SetCertificateMapRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetQuicOverride(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetQuicOverrideRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(google::cloud::cpp::compute::target_https_proxies::v1::
                         SetSslCertificatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetSslPolicy(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetUrlMap(
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetUrlMapRequest const& request) override;

 private:
  std::shared_ptr<compute_target_https_proxies_v1::TargetHttpsProxiesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_target_https_proxies_v1::TargetHttpsProxiesConnection>
MakeTargetHttpsProxiesTracingConnection(
    std::shared_ptr<
        compute_target_https_proxies_v1::TargetHttpsProxiesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_INTERNAL_TARGET_HTTPS_PROXIES_TRACING_CONNECTION_H
