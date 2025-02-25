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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/v1/internal/datastream_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datastream/v1/datastream.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastreamMetadata::DatastreamMetadata(
    std::shared_ptr<DatastreamStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::datastream::v1::ListConnectionProfilesResponse>
DatastreamMetadata::ListConnectionProfiles(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListConnectionProfilesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnectionProfiles(context, request);
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamMetadata::GetConnectionProfile(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnectionProfile(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncCreateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateConnectionProfile(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncUpdateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  SetMetadata(
      *context,
      absl::StrCat("connection_profile.name=",
                   internal::UrlEncode(request.connection_profile().name())));
  return child_->AsyncUpdateConnectionProfile(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncDeleteConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteConnectionProfile(cq, std::move(context), request);
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamMetadata::DiscoverConnectionProfile(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->DiscoverConnectionProfile(context, request);
}

StatusOr<google::cloud::datastream::v1::ListStreamsResponse>
DatastreamMetadata::ListStreams(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListStreamsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListStreams(context, request);
}

StatusOr<google::cloud::datastream::v1::Stream> DatastreamMetadata::GetStream(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetStreamRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetStream(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncCreateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateStream(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncUpdateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("stream.name=",
                           internal::UrlEncode(request.stream().name())));
  return child_->AsyncUpdateStream(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncDeleteStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteStream(cq, std::move(context), request);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamMetadata::GetStreamObject(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetStreamObjectRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetStreamObject(context, request);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamMetadata::LookupStreamObject(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->LookupStreamObject(context, request);
}

StatusOr<google::cloud::datastream::v1::ListStreamObjectsResponse>
DatastreamMetadata::ListStreamObjects(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListStreamObjectsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListStreamObjects(context, request);
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamMetadata::StartBackfillJob(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::StartBackfillJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("object=", internal::UrlEncode(request.object())));
  return child_->StartBackfillJob(context, request);
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamMetadata::StopBackfillJob(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::StopBackfillJobRequest const& request) {
  SetMetadata(context,
              absl::StrCat("object=", internal::UrlEncode(request.object())));
  return child_->StopBackfillJob(context, request);
}

StatusOr<google::cloud::datastream::v1::FetchStaticIpsResponse>
DatastreamMetadata::FetchStaticIps(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::FetchStaticIpsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->FetchStaticIps(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncCreatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreatePrivateConnection(cq, std::move(context), request);
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamMetadata::GetPrivateConnection(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPrivateConnection(context, request);
}

StatusOr<google::cloud::datastream::v1::ListPrivateConnectionsResponse>
DatastreamMetadata::ListPrivateConnections(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPrivateConnections(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncDeletePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePrivateConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncCreateRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateRoute(cq, std::move(context), request);
}

StatusOr<google::cloud::datastream::v1::Route> DatastreamMetadata::GetRoute(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetRouteRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRoute(context, request);
}

StatusOr<google::cloud::datastream::v1::ListRoutesResponse>
DatastreamMetadata::ListRoutes(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListRoutesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRoutes(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncDeleteRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DatastreamMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void DatastreamMetadata::SetMetadata(grpc::ClientContext& context,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DatastreamMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google
