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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/recaptchaenterprise/v1/recaptchaenterprise.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecaptchaEnterpriseServiceMetadata::RecaptchaEnterpriseServiceMetadata(
    std::shared_ptr<RecaptchaEnterpriseServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceMetadata::CreateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAssessment(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceMetadata::AnnotateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AnnotateAssessment(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceMetadata::CreateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
RecaptchaEnterpriseServiceMetadata::ListKeys(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListKeys(context, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceMetadata::RetrieveLegacySecretKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("key=", internal::UrlEncode(request.key())));
  return child_->RetrieveLegacySecretKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceMetadata::GetKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceMetadata::UpdateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  SetMetadata(context, absl::StrCat("key.name=",
                                    internal::UrlEncode(request.key().name())));
  return child_->UpdateKey(context, request);
}

Status RecaptchaEnterpriseServiceMetadata::DeleteKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceMetadata::MigrateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MigrateKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceMetadata::GetMetrics(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetrics(context, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
RecaptchaEnterpriseServiceMetadata::ListRelatedAccountGroups(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRelatedAccountGroups(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceMetadata::ListRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRelatedAccountGroupMemberships(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceMetadata::SearchRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("project=", internal::UrlEncode(request.project())));
  return child_->SearchRelatedAccountGroupMemberships(context, request);
}

void RecaptchaEnterpriseServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void RecaptchaEnterpriseServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
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
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
