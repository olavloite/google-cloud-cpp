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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#include "google/cloud/compute/firewalls/v1/firewalls_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewalls_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallsClient::FirewallsClient(
    ExperimentalTag, std::shared_ptr<FirewallsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FirewallsClient::~FirewallsClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::DeleteFirewall(std::string const& project,
                                std::string const& firewall, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest request;
  request.set_project(project);
  request.set_firewall(firewall);
  return connection_->DeleteFirewall(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::DeleteFirewall(
    google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFirewall(request);
}

StatusOr<google::cloud::cpp::compute::v1::Firewall>
FirewallsClient::GetFirewall(std::string const& project,
                             std::string const& firewall, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest request;
  request.set_project(project);
  request.set_firewall(firewall);
  return connection_->GetFirewall(request);
}

StatusOr<google::cloud::cpp::compute::v1::Firewall>
FirewallsClient::GetFirewall(
    google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFirewall(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::InsertFirewall(
    std::string const& project,
    google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest request;
  request.set_project(project);
  *request.mutable_firewall_resource() = firewall_resource;
  return connection_->InsertFirewall(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::InsertFirewall(
    google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertFirewall(request);
}

StreamRange<google::cloud::cpp::compute::v1::Firewall>
FirewallsClient::ListFirewalls(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest request;
  request.set_project(project);
  return connection_->ListFirewalls(request);
}

StreamRange<google::cloud::cpp::compute::v1::Firewall>
FirewallsClient::ListFirewalls(
    google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFirewalls(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::PatchFirewall(
    std::string const& project, std::string const& firewall,
    google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest request;
  request.set_project(project);
  request.set_firewall(firewall);
  *request.mutable_firewall_resource() = firewall_resource;
  return connection_->PatchFirewall(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::PatchFirewall(
    google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchFirewall(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::UpdateFirewall(
    std::string const& project, std::string const& firewall,
    google::cloud::cpp::compute::v1::Firewall const& firewall_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest request;
  request.set_project(project);
  request.set_firewall(firewall);
  *request.mutable_firewall_resource() = firewall_resource;
  return connection_->UpdateFirewall(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsClient::UpdateFirewall(
    google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFirewall(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1
}  // namespace cloud
}  // namespace google
