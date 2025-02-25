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
// source: google/cloud/compute/region_autoscalers/v1/region_autoscalers.proto

#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionAutoscalersClient::RegionAutoscalersClient(
    ExperimentalTag, std::shared_ptr<RegionAutoscalersConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionAutoscalersClient::~RegionAutoscalersClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::DeleteAutoscaler(std::string const& project,
                                          std::string const& region,
                                          std::string const& autoscaler,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_autoscalers::v1::DeleteAutoscalerRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_autoscaler(autoscaler);
  return connection_->DeleteAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::DeleteAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        DeleteAutoscalerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
RegionAutoscalersClient::GetAutoscaler(std::string const& project,
                                       std::string const& region,
                                       std::string const& autoscaler,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_autoscalers::v1::GetAutoscalerRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_autoscaler(autoscaler);
  return connection_->GetAutoscaler(request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
RegionAutoscalersClient::GetAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        GetAutoscalerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::InsertAutoscaler(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_autoscalers::v1::InsertAutoscalerRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->InsertAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::InsertAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        InsertAutoscalerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertAutoscaler(request);
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
RegionAutoscalersClient::ListRegionAutoscalers(std::string const& project,
                                               std::string const& region,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_autoscalers::v1::
      ListRegionAutoscalersRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionAutoscalers(request);
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
RegionAutoscalersClient::ListRegionAutoscalers(
    google::cloud::cpp::compute::region_autoscalers::v1::
        ListRegionAutoscalersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionAutoscalers(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::PatchAutoscaler(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_autoscalers::v1::PatchAutoscalerRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->PatchAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::PatchAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        PatchAutoscalerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::UpdateAutoscaler(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_autoscalers::v1::UpdateAutoscalerRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->UpdateAutoscaler(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersClient::UpdateAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        UpdateAutoscalerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutoscaler(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_autoscalers_v1
}  // namespace cloud
}  // namespace google
