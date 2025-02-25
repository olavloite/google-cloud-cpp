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
// source: google/cloud/compute/accelerator_types/v1/accelerator_types.proto

#include "google/cloud/compute/accelerator_types/v1/accelerator_types_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_accelerator_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AcceleratorTypesClient::AcceleratorTypesClient(
    ExperimentalTag, std::shared_ptr<AcceleratorTypesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AcceleratorTypesClient::~AcceleratorTypesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::AcceleratorTypeAggregatedList>
AcceleratorTypesClient::AggregatedListAcceleratorTypes(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::accelerator_types::v1::
      AggregatedListAcceleratorTypesRequest request;
  request.set_project(project);
  return connection_->AggregatedListAcceleratorTypes(request);
}

StatusOr<google::cloud::cpp::compute::v1::AcceleratorTypeAggregatedList>
AcceleratorTypesClient::AggregatedListAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        AggregatedListAcceleratorTypesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListAcceleratorTypes(request);
}

StatusOr<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesClient::GetAcceleratorType(std::string const& project,
                                           std::string const& zone,
                                           std::string const& accelerator_type,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::accelerator_types::v1::GetAcceleratorTypeRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_accelerator_type(accelerator_type);
  return connection_->GetAcceleratorType(request);
}

StatusOr<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesClient::GetAcceleratorType(
    google::cloud::cpp::compute::accelerator_types::v1::
        GetAcceleratorTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAcceleratorType(request);
}

StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesClient::ListAcceleratorTypes(std::string const& project,
                                             std::string const& zone,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::accelerator_types::v1::
      ListAcceleratorTypesRequest request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListAcceleratorTypes(request);
}

StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesClient::ListAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        ListAcceleratorTypesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAcceleratorTypes(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_accelerator_types_v1
}  // namespace cloud
}  // namespace google
