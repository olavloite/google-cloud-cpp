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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/serving_config_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServingConfigServiceClient::ServingConfigServiceClient(
    std::shared_ptr<ServingConfigServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ServingConfigServiceClient::~ServingConfigServiceClient() = default;

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::CreateServingConfig(
    std::string const& parent,
    google::cloud::retail::v2::ServingConfig const& serving_config,
    std::string const& serving_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::CreateServingConfigRequest request;
  request.set_parent(parent);
  *request.mutable_serving_config() = serving_config;
  request.set_serving_config_id(serving_config_id);
  return connection_->CreateServingConfig(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::CreateServingConfig(
    google::cloud::retail::v2::CreateServingConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServingConfig(request);
}

Status ServingConfigServiceClient::DeleteServingConfig(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::DeleteServingConfigRequest request;
  request.set_name(name);
  return connection_->DeleteServingConfig(request);
}

Status ServingConfigServiceClient::DeleteServingConfig(
    google::cloud::retail::v2::DeleteServingConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteServingConfig(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::UpdateServingConfig(
    google::cloud::retail::v2::ServingConfig const& serving_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::UpdateServingConfigRequest request;
  *request.mutable_serving_config() = serving_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateServingConfig(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::UpdateServingConfig(
    google::cloud::retail::v2::UpdateServingConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateServingConfig(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::GetServingConfig(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::GetServingConfigRequest request;
  request.set_name(name);
  return connection_->GetServingConfig(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::GetServingConfig(
    google::cloud::retail::v2::GetServingConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetServingConfig(request);
}

StreamRange<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::ListServingConfigs(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::ListServingConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListServingConfigs(request);
}

StreamRange<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::ListServingConfigs(
    google::cloud::retail::v2::ListServingConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServingConfigs(std::move(request));
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::AddControl(std::string const& serving_config,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::AddControlRequest request;
  request.set_serving_config(serving_config);
  return connection_->AddControl(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::AddControl(
    google::cloud::retail::v2::AddControlRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddControl(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::RemoveControl(std::string const& serving_config,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::RemoveControlRequest request;
  request.set_serving_config(serving_config);
  return connection_->RemoveControl(request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceClient::RemoveControl(
    google::cloud::retail::v2::RemoveControlRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveControl(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
