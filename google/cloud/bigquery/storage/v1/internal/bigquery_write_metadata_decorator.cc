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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/storage/v1/storage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryWriteMetadata::BigQueryWriteMetadata(
    std::shared_ptr<BigQueryWriteStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteMetadata::CreateWriteStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateWriteStream(context, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::bigquery::storage::v1::AppendRowsRequest,
    google::cloud::bigquery::storage::v1::AppendRowsResponse>>
BigQueryWriteMetadata::AsyncAppendRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->AsyncAppendRows(cq, std::move(context));
}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteMetadata::GetWriteStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWriteStream(context, request);
}

StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
BigQueryWriteMetadata::FinalizeWriteStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->FinalizeWriteStream(context, request);
}

StatusOr<google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
BigQueryWriteMetadata::BatchCommitWriteStreams(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchCommitWriteStreams(context, request);
}

StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
BigQueryWriteMetadata::FlushRows(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::FlushRowsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("write_stream=",
                           internal::UrlEncode(request.write_stream())));
  return child_->FlushRows(context, request);
}

void BigQueryWriteMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BigQueryWriteMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google
