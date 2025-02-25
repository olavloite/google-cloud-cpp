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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_auth_decorator.h"
#include <google/cloud/networksecurity/v1/network_security.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkSecurityAuth::NetworkSecurityAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<NetworkSecurityStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
NetworkSecurityAuth::ListAuthorizationPolicies(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAuthorizationPolicies(context, request);
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityAuth::GetAuthorizationPolicy(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAuthorizationPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncCreateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAuthorizationPolicy(cq, *std::move(context),
                                                     request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncUpdateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAuthorizationPolicy(cq, *std::move(context),
                                                     request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncDeleteAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAuthorizationPolicy(cq, *std::move(context),
                                                     request);
      });
}

StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
NetworkSecurityAuth::ListServerTlsPolicies(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServerTlsPolicies(context, request);
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityAuth::GetServerTlsPolicy(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServerTlsPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncCreateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateServerTlsPolicy(cq, *std::move(context),
                                                 request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncUpdateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateServerTlsPolicy(cq, *std::move(context),
                                                 request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncDeleteServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteServerTlsPolicy(cq, *std::move(context),
                                                 request);
      });
}

StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
NetworkSecurityAuth::ListClientTlsPolicies(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListClientTlsPolicies(context, request);
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityAuth::GetClientTlsPolicy(
    grpc::ClientContext& context,
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetClientTlsPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncCreateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateClientTlsPolicy(cq, *std::move(context),
                                                 request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncUpdateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateClientTlsPolicy(cq, *std::move(context),
                                                 request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncDeleteClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteClientTlsPolicy(cq, *std::move(context),
                                                 request);
      });
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> NetworkSecurityAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
