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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetTcpProxiesRestLogging::TargetTcpProxiesRestLogging(
    std::shared_ptr<TargetTcpProxiesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyAggregatedList>
TargetTcpProxiesRestLogging::AggregatedListTargetTcpProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        AggregatedListTargetTcpProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 AggregatedListTargetTcpProxiesRequest const& request) {
        return child_->AggregatedListTargetTcpProxies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestLogging::AsyncDeleteTargetTcpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 DeleteTargetTcpProxyRequest const& request) {
        return child_->AsyncDeleteTargetTcpProxy(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesRestLogging::GetTargetTcpProxy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        GetTargetTcpProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 GetTargetTcpProxyRequest const& request) {
        return child_->GetTargetTcpProxy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestLogging::AsyncInsertTargetTcpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 InsertTargetTcpProxyRequest const& request) {
        return child_->AsyncInsertTargetTcpProxy(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyList>
TargetTcpProxiesRestLogging::ListTargetTcpProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        ListTargetTcpProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 ListTargetTcpProxiesRequest const& request) {
        return child_->ListTargetTcpProxies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestLogging::AsyncSetBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetBackendServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 SetBackendServiceRequest const& request) {
        return child_->AsyncSetBackendService(cq, std::move(rest_context),
                                              request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestLogging::AsyncSetProxyHeader(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetProxyHeaderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 SetProxyHeaderRequest const& request) {
        return child_->AsyncSetProxyHeader(cq, std::move(rest_context),
                                           request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> TargetTcpProxiesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google
