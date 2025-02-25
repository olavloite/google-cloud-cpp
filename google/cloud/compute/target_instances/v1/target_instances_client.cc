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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#include "google/cloud/compute/target_instances/v1/target_instances_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetInstancesClient::TargetInstancesClient(
    ExperimentalTag, std::shared_ptr<TargetInstancesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TargetInstancesClient::~TargetInstancesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
TargetInstancesClient::AggregatedListTargetInstances(std::string const& project,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_instances::v1::
      AggregatedListTargetInstancesRequest request;
  request.set_project(project);
  return connection_->AggregatedListTargetInstances(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
TargetInstancesClient::AggregatedListTargetInstances(
    google::cloud::cpp::compute::target_instances::v1::
        AggregatedListTargetInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListTargetInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesClient::DeleteTargetInstance(std::string const& project,
                                            std::string const& zone,
                                            std::string const& target_instance,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_instances::v1::DeleteTargetInstanceRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_target_instance(target_instance);
  return connection_->DeleteTargetInstance(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesClient::DeleteTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        DeleteTargetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetInstance(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesClient::GetTargetInstance(std::string const& project,
                                         std::string const& zone,
                                         std::string const& target_instance,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_instances::v1::GetTargetInstanceRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_target_instance(target_instance);
  return connection_->GetTargetInstance(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesClient::GetTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        GetTargetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetInstance(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesClient::InsertTargetInstance(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::TargetInstance const&
        target_instance_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_instances::v1::InsertTargetInstanceRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_target_instance_resource() = target_instance_resource;
  return connection_->InsertTargetInstance(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesClient::InsertTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        InsertTargetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetInstance(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesClient::ListTargetInstances(std::string const& project,
                                           std::string const& zone,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_instances::v1::ListTargetInstancesRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListTargetInstances(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesClient::ListTargetInstances(
    google::cloud::cpp::compute::target_instances::v1::
        ListTargetInstancesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTargetInstances(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1
}  // namespace cloud
}  // namespace google
