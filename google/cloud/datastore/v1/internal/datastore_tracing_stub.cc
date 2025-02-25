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
// source: google/datastore/v1/datastore.proto

#include "google/cloud/datastore/v1/internal/datastore_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace datastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatastoreTracingStub::DatastoreTracingStub(std::shared_ptr<DatastoreStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::datastore::v1::LookupResponse> DatastoreTracingStub::Lookup(
    grpc::ClientContext& context,
    google::datastore::v1::LookupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.datastore.v1.Datastore", "Lookup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Lookup(context, request));
}

StatusOr<google::datastore::v1::RunQueryResponse>
DatastoreTracingStub::RunQuery(
    grpc::ClientContext& context,
    google::datastore::v1::RunQueryRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.datastore.v1.Datastore", "RunQuery");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->RunQuery(context, request));
}

StatusOr<google::datastore::v1::RunAggregationQueryResponse>
DatastoreTracingStub::RunAggregationQuery(
    grpc::ClientContext& context,
    google::datastore::v1::RunAggregationQueryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.datastore.v1.Datastore",
                                     "RunAggregationQuery");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RunAggregationQuery(context, request));
}

StatusOr<google::datastore::v1::BeginTransactionResponse>
DatastoreTracingStub::BeginTransaction(
    grpc::ClientContext& context,
    google::datastore::v1::BeginTransactionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.datastore.v1.Datastore",
                                     "BeginTransaction");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->BeginTransaction(context, request));
}

StatusOr<google::datastore::v1::CommitResponse> DatastoreTracingStub::Commit(
    grpc::ClientContext& context,
    google::datastore::v1::CommitRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.datastore.v1.Datastore", "Commit");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Commit(context, request));
}

StatusOr<google::datastore::v1::RollbackResponse>
DatastoreTracingStub::Rollback(
    grpc::ClientContext& context,
    google::datastore::v1::RollbackRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.datastore.v1.Datastore", "Rollback");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Rollback(context, request));
}

StatusOr<google::datastore::v1::AllocateIdsResponse>
DatastoreTracingStub::AllocateIds(
    grpc::ClientContext& context,
    google::datastore::v1::AllocateIdsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.datastore.v1.Datastore", "AllocateIds");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AllocateIds(context, request));
}

StatusOr<google::datastore::v1::ReserveIdsResponse>
DatastoreTracingStub::ReserveIds(
    grpc::ClientContext& context,
    google::datastore::v1::ReserveIdsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.datastore.v1.Datastore", "ReserveIds");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ReserveIds(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DatastoreStub> MakeDatastoreTracingStub(
    std::shared_ptr<DatastoreStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DatastoreTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_v1_internal
}  // namespace cloud
}  // namespace google
