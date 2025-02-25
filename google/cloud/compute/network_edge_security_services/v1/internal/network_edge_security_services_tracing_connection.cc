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
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#include "google/cloud/compute/network_edge_security_services/v1/internal/network_edge_security_services_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_edge_security_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetworkEdgeSecurityServicesTracingConnection::
    NetworkEdgeSecurityServicesTracingConnection(
        std::shared_ptr<compute_network_edge_security_services_v1::
                            NetworkEdgeSecurityServicesConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::cpp::compute::v1::NetworkEdgeSecurityServiceAggregatedList>
NetworkEdgeSecurityServicesTracingConnection::
    AggregatedListNetworkEdgeSecurityServices(
        google::cloud::cpp::compute::network_edge_security_services::v1::
            AggregatedListNetworkEdgeSecurityServicesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_edge_security_services_v1::"
      "NetworkEdgeSecurityServicesConnection::"
      "AggregatedListNetworkEdgeSecurityServices");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->AggregatedListNetworkEdgeSecurityServices(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesTracingConnection::DeleteNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        DeleteNetworkEdgeSecurityServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_edge_security_services_v1::"
      "NetworkEdgeSecurityServicesConnection::"
      "DeleteNetworkEdgeSecurityService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNetworkEdgeSecurityService(request));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityService>
NetworkEdgeSecurityServicesTracingConnection::GetNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        GetNetworkEdgeSecurityServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_edge_security_services_v1::"
      "NetworkEdgeSecurityServicesConnection::GetNetworkEdgeSecurityService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetNetworkEdgeSecurityService(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesTracingConnection::InsertNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        InsertNetworkEdgeSecurityServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_edge_security_services_v1::"
      "NetworkEdgeSecurityServicesConnection::"
      "InsertNetworkEdgeSecurityService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNetworkEdgeSecurityService(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesTracingConnection::PatchNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        PatchNetworkEdgeSecurityServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_edge_security_services_v1::"
      "NetworkEdgeSecurityServicesConnection::PatchNetworkEdgeSecurityService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchNetworkEdgeSecurityService(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_network_edge_security_services_v1::
                    NetworkEdgeSecurityServicesConnection>
MakeNetworkEdgeSecurityServicesTracingConnection(
    std::shared_ptr<compute_network_edge_security_services_v1::
                        NetworkEdgeSecurityServicesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NetworkEdgeSecurityServicesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1_internal
}  // namespace cloud
}  // namespace google
