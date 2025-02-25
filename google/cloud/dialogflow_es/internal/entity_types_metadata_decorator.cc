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

#include "google/cloud/dialogflow_es/internal/entity_types_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/entity_type.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesMetadata::EntityTypesMetadata(
    std::shared_ptr<EntityTypesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::ListEntityTypesResponse>
EntityTypesMetadata::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListEntityTypesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntityTypes(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesMetadata::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesMetadata::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesMetadata::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("entity_type.name=",
                           internal::UrlEncode(request.entity_type().name())));
  return child_->UpdateEntityType(context, request);
}

Status EntityTypesMetadata::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEntityType(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncBatchUpdateEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchUpdateEntityTypes(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncBatchDeleteEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchDeleteEntityTypes(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncBatchCreateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchCreateEntities(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncBatchUpdateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchUpdateEntities(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncBatchDeleteEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchDeleteEntities(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> EntityTypesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void EntityTypesMetadata::SetMetadata(grpc::ClientContext& context,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void EntityTypesMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
