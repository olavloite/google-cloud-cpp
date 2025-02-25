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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_INTERNAL_TARGET_GRPC_PROXIES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_INTERNAL_TARGET_GRPC_PROXIES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetGrpcProxiesRestStub {
 public:
  virtual ~TargetGrpcProxiesRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          DeleteTargetGrpcProxyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
  GetTargetGrpcProxy(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::target_grpc_proxies::v1::
                         GetTargetGrpcProxyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          InsertTargetGrpcProxyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxyList>
  ListTargetGrpcProxies(google::cloud::rest_internal::RestContext& rest_context,
                        google::cloud::cpp::compute::target_grpc_proxies::v1::
                            ListTargetGrpcProxiesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          PatchTargetGrpcProxyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultTargetGrpcProxiesRestStub : public TargetGrpcProxiesRestStub {
 public:
  ~DefaultTargetGrpcProxiesRestStub() override = default;

  explicit DefaultTargetGrpcProxiesRestStub(Options options);
  DefaultTargetGrpcProxiesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          DeleteTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy> GetTargetGrpcProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          GetTargetGrpcProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          InsertTargetGrpcProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxyList>
  ListTargetGrpcProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          ListTargetGrpcProxiesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchTargetGrpcProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_grpc_proxies::v1::
          PatchTargetGrpcProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_INTERNAL_TARGET_GRPC_PROXIES_REST_STUB_H
