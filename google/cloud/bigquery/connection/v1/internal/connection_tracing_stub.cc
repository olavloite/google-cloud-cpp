// Copyright 2022 Google LLC
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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection/v1/internal/connection_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace bigquery_connection_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConnectionServiceTracingStub::ConnectionServiceTracingStub(
    std::shared_ptr<ConnectionServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceTracingStub::CreateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService",
      "CreateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateConnection(context, request));
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceTracingStub::GetConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService", "GetConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConnection(context, request));
}

StatusOr<google::cloud::bigquery::connection::v1::ListConnectionsResponse>
ConnectionServiceTracingStub::ListConnections(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::ListConnectionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService",
      "ListConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListConnections(context, request));
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceTracingStub::UpdateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService",
      "UpdateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateConnection(context, request));
}

Status ConnectionServiceTracingStub::DeleteConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService",
      "DeleteConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteConnection(context, request));
}

StatusOr<google::iam::v1::Policy> ConnectionServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> ConnectionServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectionServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.connection.v1.ConnectionService",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ConnectionServiceStub> MakeConnectionServiceTracingStub(
    std::shared_ptr<ConnectionServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ConnectionServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1_internal
}  // namespace cloud
}  // namespace google
