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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/v1/internal/gke_hub_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkehub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubMetadata::GkeHubMetadata(
    std::shared_ptr<GkeHubStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
GkeHubMetadata::ListMemberships(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMemberships(context, request);
}

StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
GkeHubMetadata::ListFeatures(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListFeatures(context, request);
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubMetadata::GetMembership(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMembership(context, request);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubMetadata::GetFeature(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetFeature(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncCreateMembership(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateMembership(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateFeature(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncDeleteMembership(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteMembership(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteFeature(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncUpdateMembership(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateMembership(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncUpdateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateFeature(cq, std::move(context), request);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubMetadata::GenerateConnectManifest(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GenerateConnectManifest(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> GkeHubMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void GkeHubMetadata::SetMetadata(grpc::ClientContext& context,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void GkeHubMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace gkehub_v1_internal
}  // namespace cloud
}  // namespace google
