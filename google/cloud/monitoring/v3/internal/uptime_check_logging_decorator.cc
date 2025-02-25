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
// source: google/monitoring/v3/uptime_service.proto

#include "google/cloud/monitoring/v3/internal/uptime_check_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/v3/uptime_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UptimeCheckServiceLogging::UptimeCheckServiceLogging(
    std::shared_ptr<UptimeCheckServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::monitoring::v3::ListUptimeCheckConfigsResponse>
UptimeCheckServiceLogging::ListUptimeCheckConfigs(
    grpc::ClientContext& context,
    google::monitoring::v3::ListUptimeCheckConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::monitoring::v3::ListUptimeCheckConfigsRequest const&
                 request) {
        return child_->ListUptimeCheckConfigs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceLogging::GetUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
        return child_->GetUptimeCheckConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceLogging::CreateUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateUptimeCheckConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::monitoring::v3::CreateUptimeCheckConfigRequest const&
                 request) {
        return child_->CreateUptimeCheckConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceLogging::UpdateUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::monitoring::v3::UpdateUptimeCheckConfigRequest const&
                 request) {
        return child_->UpdateUptimeCheckConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status UptimeCheckServiceLogging::DeleteUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::monitoring::v3::DeleteUptimeCheckConfigRequest const&
                 request) {
        return child_->DeleteUptimeCheckConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::monitoring::v3::ListUptimeCheckIpsResponse>
UptimeCheckServiceLogging::ListUptimeCheckIps(
    grpc::ClientContext& context,
    google::monitoring::v3::ListUptimeCheckIpsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::monitoring::v3::ListUptimeCheckIpsRequest const& request) {
        return child_->ListUptimeCheckIps(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
