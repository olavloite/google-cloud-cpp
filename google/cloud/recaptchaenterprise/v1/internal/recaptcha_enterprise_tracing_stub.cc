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

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RecaptchaEnterpriseServiceTracingStub::RecaptchaEnterpriseServiceTracingStub(
    std::shared_ptr<RecaptchaEnterpriseServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceTracingStub::CreateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "CreateAssessment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateAssessment(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceTracingStub::AnnotateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "AnnotateAssessment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AnnotateAssessment(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingStub::CreateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "CreateKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->CreateKey(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
RecaptchaEnterpriseServiceTracingStub::ListKeys(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "ListKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListKeys(context, request));
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceTracingStub::RetrieveLegacySecretKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "RetrieveLegacySecretKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RetrieveLegacySecretKey(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingStub::GetKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "GetKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetKey(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingStub::UpdateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "UpdateKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->UpdateKey(context, request));
}

Status RecaptchaEnterpriseServiceTracingStub::DeleteKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "DeleteKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->DeleteKey(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingStub::MigrateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "MigrateKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->MigrateKey(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceTracingStub::GetMetrics(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "GetMetrics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMetrics(context, request));
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
RecaptchaEnterpriseServiceTracingStub::ListRelatedAccountGroups(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "ListRelatedAccountGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRelatedAccountGroups(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceTracingStub::ListRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "ListRelatedAccountGroupMemberships");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListRelatedAccountGroupMemberships(context, request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceTracingStub::SearchRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.recaptchaenterprise.v1.RecaptchaEnterpriseService",
      "SearchRelatedAccountGroupMemberships");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SearchRelatedAccountGroupMemberships(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<RecaptchaEnterpriseServiceStub>
MakeRecaptchaEnterpriseServiceTracingStub(
    std::shared_ptr<RecaptchaEnterpriseServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<RecaptchaEnterpriseServiceTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
