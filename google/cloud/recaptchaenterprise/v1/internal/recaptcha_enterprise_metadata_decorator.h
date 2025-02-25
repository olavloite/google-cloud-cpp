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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_METADATA_DECORATOR_H

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RecaptchaEnterpriseServiceMetadata
    : public RecaptchaEnterpriseServiceStub {
 public:
  ~RecaptchaEnterpriseServiceMetadata() override = default;
  RecaptchaEnterpriseServiceMetadata(
      std::shared_ptr<RecaptchaEnterpriseServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::recaptchaenterprise::v1::Assessment> CreateAssessment(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
  AnnotateAssessment(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> CreateKey(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse> ListKeys(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request)
      override;

  StatusOr<
      google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
  RetrieveLegacySecretKey(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::
          RetrieveLegacySecretKeyRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> GetKey(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> UpdateKey(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request)
      override;

  Status DeleteKey(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> MigrateKey(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Metrics> GetMetrics(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request)
      override;

  StatusOr<
      google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
  ListRelatedAccountGroups(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupsRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::
               ListRelatedAccountGroupMembershipsResponse>
  ListRelatedAccountGroupMemberships(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupMembershipsRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::
               SearchRelatedAccountGroupMembershipsResponse>
  SearchRelatedAccountGroupMemberships(
      grpc::ClientContext& context,
      google::cloud::recaptchaenterprise::v1::
          SearchRelatedAccountGroupMembershipsRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<RecaptchaEnterpriseServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_METADATA_DECORATOR_H
