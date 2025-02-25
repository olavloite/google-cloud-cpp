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
// source: google/cloud/discoveryengine/v1/schema_service.proto

#include "google/cloud/discoveryengine/v1/internal/schema_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SchemaServiceTracingConnection::SchemaServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::SchemaServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::discoveryengine::v1::Schema>
SchemaServiceTracingConnection::GetSchema(
    google::cloud::discoveryengine::v1::GetSchemaRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::SchemaServiceConnection::GetSchema");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSchema(request));
}

StreamRange<google::cloud::discoveryengine::v1::Schema>
SchemaServiceTracingConnection::ListSchemas(
    google::cloud::discoveryengine::v1::ListSchemasRequest request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::SchemaServiceConnection::ListSchemas");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSchemas(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::discoveryengine::v1::Schema>(std::move(span),
                                                  std::move(sr));
}

future<StatusOr<google::cloud::discoveryengine::v1::Schema>>
SchemaServiceTracingConnection::CreateSchema(
    google::cloud::discoveryengine::v1::CreateSchemaRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::SchemaServiceConnection::CreateSchema");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSchema(request));
}

future<StatusOr<google::cloud::discoveryengine::v1::Schema>>
SchemaServiceTracingConnection::UpdateSchema(
    google::cloud::discoveryengine::v1::UpdateSchemaRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::SchemaServiceConnection::UpdateSchema");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateSchema(request));
}

future<StatusOr<google::cloud::discoveryengine::v1::DeleteSchemaMetadata>>
SchemaServiceTracingConnection::DeleteSchema(
    google::cloud::discoveryengine::v1::DeleteSchemaRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::SchemaServiceConnection::DeleteSchema");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSchema(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<discoveryengine_v1::SchemaServiceConnection>
MakeSchemaServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::SchemaServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SchemaServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
