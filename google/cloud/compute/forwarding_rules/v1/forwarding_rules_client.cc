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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ForwardingRulesClient::ForwardingRulesClient(
    ExperimentalTag, std::shared_ptr<ForwardingRulesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ForwardingRulesClient::~ForwardingRulesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleAggregatedList>
ForwardingRulesClient::AggregatedListForwardingRules(std::string const& project,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::
      AggregatedListForwardingRulesRequest request;
  request.set_project(project);
  return connection_->AggregatedListForwardingRules(request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleAggregatedList>
ForwardingRulesClient::AggregatedListForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        AggregatedListForwardingRulesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListForwardingRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::DeleteForwardingRule(std::string const& project,
                                            std::string const& region,
                                            std::string const& forwarding_rule,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::DeleteForwardingRuleRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_forwarding_rule(forwarding_rule);
  return connection_->DeleteForwardingRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::DeleteForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        DeleteForwardingRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteForwardingRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesClient::GetForwardingRule(std::string const& project,
                                         std::string const& region,
                                         std::string const& forwarding_rule,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::GetForwardingRuleRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_forwarding_rule(forwarding_rule);
  return connection_->GetForwardingRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesClient::GetForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        GetForwardingRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetForwardingRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::InsertForwardingRule(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::ForwardingRule const&
        forwarding_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::InsertForwardingRuleRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_forwarding_rule_resource() = forwarding_rule_resource;
  return connection_->InsertForwardingRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::InsertForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        InsertForwardingRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertForwardingRule(request);
}

StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesClient::ListForwardingRules(std::string const& project,
                                           std::string const& region,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::ListForwardingRulesRequest
      request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListForwardingRules(request);
}

StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesClient::ListForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        ListForwardingRulesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListForwardingRules(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::PatchForwardingRule(
    std::string const& project, std::string const& region,
    std::string const& forwarding_rule,
    google::cloud::cpp::compute::v1::ForwardingRule const&
        forwarding_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::PatchForwardingRuleRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_forwarding_rule(forwarding_rule);
  *request.mutable_forwarding_rule_resource() = forwarding_rule_resource;
  return connection_->PatchForwardingRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::PatchForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        PatchForwardingRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchForwardingRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::SetLabels(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
        region_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_labels_request_resource() =
      region_set_labels_request_resource;
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::SetLabels(
    google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::SetTarget(
    std::string const& project, std::string const& region,
    std::string const& forwarding_rule,
    google::cloud::cpp::compute::v1::TargetReference const&
        target_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_forwarding_rule(forwarding_rule);
  *request.mutable_target_reference_resource() = target_reference_resource;
  return connection_->SetTarget(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesClient::SetTarget(
    google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetTarget(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_forwarding_rules_v1
}  // namespace cloud
}  // namespace google
