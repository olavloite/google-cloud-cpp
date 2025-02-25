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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/datatransfer/v1/datatransfer.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataTransferServiceMetadata::DataTransferServiceMetadata(
    std::shared_ptr<DataTransferServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceMetadata::GetDataSource(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataSource(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListDataSourcesResponse>
DataTransferServiceMetadata::ListDataSources(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataSources(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceMetadata::CreateTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTransferConfig(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceMetadata::UpdateTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("transfer_config.name=",
                   internal::UrlEncode(request.transfer_config().name())));
  return child_->UpdateTransferConfig(context, request);
}

Status DataTransferServiceMetadata::DeleteTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTransferConfig(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceMetadata::GetTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTransferConfig(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferConfigsResponse>
DataTransferServiceMetadata::ListTransferConfigs(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTransferConfigs(context, request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceMetadata::ScheduleTransferRuns(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ScheduleTransferRuns(context, request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceMetadata::StartManualTransferRuns(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->StartManualTransferRuns(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceMetadata::GetTransferRun(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTransferRun(context, request);
}

Status DataTransferServiceMetadata::DeleteTransferRun(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTransferRun(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferRunsResponse>
DataTransferServiceMetadata::ListTransferRuns(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTransferRuns(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferLogsResponse>
DataTransferServiceMetadata::ListTransferLogs(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTransferLogs(context, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceMetadata::CheckValidCreds(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CheckValidCreds(context, request);
}

Status DataTransferServiceMetadata::EnrollDataSources(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->EnrollDataSources(context, request);
}

void DataTransferServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DataTransferServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace bigquery_datatransfer_v1_internal
}  // namespace cloud
}  // namespace google
