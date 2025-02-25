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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EntityTypesTracingStub::EntityTypesTracingStub(
    std::shared_ptr<EntityTypesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::ListEntityTypesResponse>
EntityTypesTracingStub::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListEntityTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "ListEntityTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEntityTypes(context, request));
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingStub::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEntityType(context, request));
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingStub::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "CreateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateEntityType(context, request));
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingStub::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateEntityType(context, request));
}

Status EntityTypesTracingStub::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "DeleteEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteEntityType(context, request));
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesTracingStub::AsyncBatchUpdateEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "BatchUpdateEntityTypes");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchUpdateEntityTypes(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesTracingStub::AsyncBatchDeleteEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "BatchDeleteEntityTypes");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchDeleteEntityTypes(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesTracingStub::AsyncBatchCreateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "BatchCreateEntities");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchCreateEntities(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesTracingStub::AsyncBatchUpdateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "BatchUpdateEntities");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchUpdateEntities(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesTracingStub::AsyncBatchDeleteEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EntityTypes",
                                     "BatchDeleteEntities");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchDeleteEntities(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> EntityTypesTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<EntityTypesStub> MakeEntityTypesTracingStub(
    std::shared_ptr<EntityTypesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EntityTypesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
