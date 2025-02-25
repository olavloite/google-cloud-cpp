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
// source: google/cloud/compute/regions/v1/regions.proto

#include "google/cloud/compute/regions/v1/regions_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_regions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionsClient::RegionsClient(ExperimentalTag,
                             std::shared_ptr<RegionsConnection> connection,
                             Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionsClient::~RegionsClient() = default;

StatusOr<google::cloud::cpp::compute::v1::Region> RegionsClient::GetRegion(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::regions::v1::GetRegionRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->GetRegion(request);
}

StatusOr<google::cloud::cpp::compute::v1::Region> RegionsClient::GetRegion(
    google::cloud::cpp::compute::regions::v1::GetRegionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegion(request);
}

StreamRange<google::cloud::cpp::compute::v1::Region> RegionsClient::ListRegions(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::regions::v1::ListRegionsRequest request;
  request.set_project(project);
  return connection_->ListRegions(request);
}

StreamRange<google::cloud::cpp::compute::v1::Region> RegionsClient::ListRegions(
    google::cloud::cpp::compute::regions::v1::ListRegionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegions(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_regions_v1
}  // namespace cloud
}  // namespace google
