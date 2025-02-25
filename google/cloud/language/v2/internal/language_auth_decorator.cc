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
// source: google/cloud/language/v2/language_service.proto

#include "google/cloud/language/v2/internal/language_auth_decorator.h"
#include <google/cloud/language/v2/language_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace language_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceAuth::LanguageServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<LanguageServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
LanguageServiceAuth::AnalyzeSentiment(
    grpc::ClientContext& context,
    google::cloud::language::v2::AnalyzeSentimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AnalyzeSentiment(context, request);
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
LanguageServiceAuth::AnalyzeEntities(
    grpc::ClientContext& context,
    google::cloud::language::v2::AnalyzeEntitiesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AnalyzeEntities(context, request);
}

StatusOr<google::cloud::language::v2::ClassifyTextResponse>
LanguageServiceAuth::ClassifyText(
    grpc::ClientContext& context,
    google::cloud::language::v2::ClassifyTextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ClassifyText(context, request);
}

StatusOr<google::cloud::language::v2::ModerateTextResponse>
LanguageServiceAuth::ModerateText(
    grpc::ClientContext& context,
    google::cloud::language::v2::ModerateTextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ModerateText(context, request);
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
LanguageServiceAuth::AnnotateText(
    grpc::ClientContext& context,
    google::cloud::language::v2::AnnotateTextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AnnotateText(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2_internal
}  // namespace cloud
}  // namespace google
