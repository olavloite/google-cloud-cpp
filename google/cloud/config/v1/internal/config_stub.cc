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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/internal/config_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/config/v1/config.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigStub::~ConfigStub() = default;

StatusOr<google::cloud::config::v1::ListDeploymentsResponse>
DefaultConfigStub::ListDeployments(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ListDeploymentsRequest const& request) {
  google::cloud::config::v1::ListDeploymentsResponse response;
  auto status =
      grpc_stub_->ListDeployments(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Deployment>
DefaultConfigStub::GetDeployment(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  google::cloud::config::v1::Deployment response;
  auto status = grpc_stub_->GetDeployment(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncCreateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::CreateDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::CreateDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDeployment(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncUpdateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::UpdateDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::UpdateDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDeployment(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncDeleteDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::DeleteDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::DeleteDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::config::v1::ListRevisionsResponse>
DefaultConfigStub::ListRevisions(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ListRevisionsRequest const& request) {
  google::cloud::config::v1::ListRevisionsResponse response;
  auto status = grpc_stub_->ListRevisions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Revision> DefaultConfigStub::GetRevision(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::GetRevisionRequest const& request) {
  google::cloud::config::v1::Revision response;
  auto status = grpc_stub_->GetRevision(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Resource> DefaultConfigStub::GetResource(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::GetResourceRequest const& request) {
  google::cloud::config::v1::Resource response;
  auto status = grpc_stub_->GetResource(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::ListResourcesResponse>
DefaultConfigStub::ListResources(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ListResourcesRequest const& request) {
  google::cloud::config::v1::ListResourcesResponse response;
  auto status = grpc_stub_->ListResources(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Statefile>
DefaultConfigStub::ExportDeploymentStatefile(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  google::cloud::config::v1::Statefile response;
  auto status = grpc_stub_->ExportDeploymentStatefile(&client_context, request,
                                                      &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Statefile>
DefaultConfigStub::ExportRevisionStatefile(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  google::cloud::config::v1::Statefile response;
  auto status =
      grpc_stub_->ExportRevisionStatefile(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::config::v1::Statefile>
DefaultConfigStub::ImportStatefile(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  google::cloud::config::v1::Statefile response;
  auto status =
      grpc_stub_->ImportStatefile(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConfigStub::DeleteStatefile(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteStatefile(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncLockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::LockDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::LockDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncLockDeployment(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncUnlockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::config::v1::UnlockDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::config::v1::UnlockDeploymentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUnlockDeployment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::config::v1::LockInfo> DefaultConfigStub::ExportLockInfo(
    grpc::ClientContext& client_context,
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  google::cloud::config::v1::LockInfo response;
  auto status = grpc_stub_->ExportLockInfo(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConfigStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultConfigStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
