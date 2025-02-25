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

#include "google/cloud/language/v2/language_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceClient::LanguageServiceClient(
    std::shared_ptr<LanguageServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
LanguageServiceClient::~LanguageServiceClient() = default;

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
LanguageServiceClient::AnalyzeSentiment(
    google::cloud::language::v2::Document const& document,
    google::cloud::language::v2::EncodingType encoding_type, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::AnalyzeSentimentRequest request;
  *request.mutable_document() = document;
  request.set_encoding_type(encoding_type);
  return connection_->AnalyzeSentiment(request);
}

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
LanguageServiceClient::AnalyzeSentiment(
    google::cloud::language::v2::Document const& document, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::AnalyzeSentimentRequest request;
  *request.mutable_document() = document;
  return connection_->AnalyzeSentiment(request);
}

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
LanguageServiceClient::AnalyzeSentiment(
    google::cloud::language::v2::AnalyzeSentimentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AnalyzeSentiment(request);
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
LanguageServiceClient::AnalyzeEntities(
    google::cloud::language::v2::Document const& document,
    google::cloud::language::v2::EncodingType encoding_type, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::AnalyzeEntitiesRequest request;
  *request.mutable_document() = document;
  request.set_encoding_type(encoding_type);
  return connection_->AnalyzeEntities(request);
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
LanguageServiceClient::AnalyzeEntities(
    google::cloud::language::v2::Document const& document, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::AnalyzeEntitiesRequest request;
  *request.mutable_document() = document;
  return connection_->AnalyzeEntities(request);
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
LanguageServiceClient::AnalyzeEntities(
    google::cloud::language::v2::AnalyzeEntitiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AnalyzeEntities(request);
}

StatusOr<google::cloud::language::v2::ClassifyTextResponse>
LanguageServiceClient::ClassifyText(
    google::cloud::language::v2::Document const& document, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::ClassifyTextRequest request;
  *request.mutable_document() = document;
  return connection_->ClassifyText(request);
}

StatusOr<google::cloud::language::v2::ClassifyTextResponse>
LanguageServiceClient::ClassifyText(
    google::cloud::language::v2::ClassifyTextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ClassifyText(request);
}

StatusOr<google::cloud::language::v2::ModerateTextResponse>
LanguageServiceClient::ModerateText(
    google::cloud::language::v2::Document const& document, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::ModerateTextRequest request;
  *request.mutable_document() = document;
  return connection_->ModerateText(request);
}

StatusOr<google::cloud::language::v2::ModerateTextResponse>
LanguageServiceClient::ModerateText(
    google::cloud::language::v2::ModerateTextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ModerateText(request);
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
LanguageServiceClient::AnnotateText(
    google::cloud::language::v2::Document const& document,
    google::cloud::language::v2::AnnotateTextRequest::Features const& features,
    google::cloud::language::v2::EncodingType encoding_type, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::AnnotateTextRequest request;
  *request.mutable_document() = document;
  *request.mutable_features() = features;
  request.set_encoding_type(encoding_type);
  return connection_->AnnotateText(request);
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
LanguageServiceClient::AnnotateText(
    google::cloud::language::v2::Document const& document,
    google::cloud::language::v2::AnnotateTextRequest::Features const& features,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::language::v2::AnnotateTextRequest request;
  *request.mutable_document() = document;
  *request.mutable_features() = features;
  return connection_->AnnotateText(request);
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
LanguageServiceClient::AnnotateText(
    google::cloud::language::v2::AnnotateTextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AnnotateText(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2
}  // namespace cloud
}  // namespace google
