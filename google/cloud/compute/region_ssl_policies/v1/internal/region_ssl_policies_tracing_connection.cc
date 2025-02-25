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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionSslPoliciesTracingConnection::RegionSslPoliciesTracingConnection(
    std::shared_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesTracingConnection::DeleteSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        DeleteSslPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_ssl_policies_v1::RegionSslPoliciesConnection::"
      "DeleteSslPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSslPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesTracingConnection::GetSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        GetSslPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_ssl_policies_v1::RegionSslPoliciesConnection::"
      "GetSslPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSslPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesTracingConnection::InsertSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        InsertSslPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_ssl_policies_v1::RegionSslPoliciesConnection::"
      "InsertSslPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertSslPolicy(request));
}

StreamRange<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesTracingConnection::ListRegionSslPolicies(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListRegionSslPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_ssl_policies_v1::RegionSslPoliciesConnection::"
      "ListRegionSslPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionSslPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::SslPolicy>(std::move(span),
                                                  std::move(sr));
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
RegionSslPoliciesTracingConnection::ListAvailableFeatures(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListAvailableFeaturesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_ssl_policies_v1::RegionSslPoliciesConnection::"
      "ListAvailableFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListAvailableFeatures(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesTracingConnection::PatchSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        PatchSslPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_ssl_policies_v1::RegionSslPoliciesConnection::"
      "PatchSslPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchSslPolicy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
MakeRegionSslPoliciesTracingConnection(
    std::shared_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<RegionSslPoliciesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google
