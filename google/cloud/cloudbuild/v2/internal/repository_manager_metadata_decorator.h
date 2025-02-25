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
// source: google/devtools/cloudbuild/v2/repositories.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_METADATA_DECORATOR_H

#include "google/cloud/cloudbuild/v2/internal/repository_manager_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RepositoryManagerMetadata : public RepositoryManagerStub {
 public:
  ~RepositoryManagerMetadata() override = default;
  RepositoryManagerMetadata(
      std::shared_ptr<RepositoryManagerStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::Connection> GetConnection(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::GetConnectionRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::ListConnectionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateRepositories(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::Repository> GetRepository(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::GetRepositoryRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
  FetchReadToken(grpc::ClientContext& context,
                 google::devtools::cloudbuild::v2::FetchReadTokenRequest const&
                     request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
  FetchLinkableRepositories(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse> FetchGitRefs(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<RepositoryManagerStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_METADATA_DECORATOR_H
