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
// source: google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto

#include "google/cloud/compute/target_vpn_gateways/v1/internal/target_vpn_gateways_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetVpnGatewaysTracingConnection::TargetVpnGatewaysTracingConnection(
    std::shared_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
        child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetVpnGatewayAggregatedList>
TargetVpnGatewaysTracingConnection::AggregatedListTargetVpnGateways(
    google::cloud::cpp::compute::target_vpn_gateways::v1::
        AggregatedListTargetVpnGatewaysRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection::"
      "AggregatedListTargetVpnGateways");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->AggregatedListTargetVpnGateways(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetVpnGatewaysTracingConnection::DeleteTargetVpnGateway(
    google::cloud::cpp::compute::target_vpn_gateways::v1::
        DeleteTargetVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection::"
      "DeleteTargetVpnGateway");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTargetVpnGateway(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>
TargetVpnGatewaysTracingConnection::GetTargetVpnGateway(
    google::cloud::cpp::compute::target_vpn_gateways::v1::
        GetTargetVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection::"
      "GetTargetVpnGateway");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetVpnGateway(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetVpnGatewaysTracingConnection::InsertTargetVpnGateway(
    google::cloud::cpp::compute::target_vpn_gateways::v1::
        InsertTargetVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection::"
      "InsertTargetVpnGateway");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertTargetVpnGateway(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetVpnGateway>
TargetVpnGatewaysTracingConnection::ListTargetVpnGateways(
    google::cloud::cpp::compute::target_vpn_gateways::v1::
        ListTargetVpnGatewaysRequest request) {
  auto span = internal::MakeSpan(
      "compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection::"
      "ListTargetVpnGateways");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTargetVpnGateways(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetVpnGateway>(std::move(span),
                                                         std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetVpnGatewaysTracingConnection::SetLabels(
    google::cloud::cpp::compute::target_vpn_gateways::v1::
        SetLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
MakeTargetVpnGatewaysTracingConnection(
    std::shared_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<TargetVpnGatewaysTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google
