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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#include "google/cloud/compute/node_templates/v1/internal/node_templates_option_defaults.h"
#include "google/cloud/compute/node_templates/v1/node_templates_connection.h"
#include "google/cloud/compute/node_templates/v1/node_templates_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NodeTemplatesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_NODE_TEMPLATES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NODE_TEMPLATES_AUTHORITY", "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options
           .has<compute_node_templates_v1::NodeTemplatesRetryPolicyOption>()) {
    options.set<compute_node_templates_v1::NodeTemplatesRetryPolicyOption>(
        compute_node_templates_v1::NodeTemplatesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          compute_node_templates_v1::NodeTemplatesBackoffPolicyOption>()) {
    options.set<compute_node_templates_v1::NodeTemplatesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          compute_node_templates_v1::NodeTemplatesPollingPolicyOption>()) {
    options.set<compute_node_templates_v1::NodeTemplatesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_node_templates_v1::NodeTemplatesRetryPolicyOption::Type,
            compute_node_templates_v1::NodeTemplatesBackoffPolicyOption::Type>(
            options
                .get<
                    compute_node_templates_v1::NodeTemplatesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_node_templates_v1::
                       NodeTemplatesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_node_templates_v1::
                    NodeTemplatesConnectionIdempotencyPolicyOption>(
        compute_node_templates_v1::
            MakeDefaultNodeTemplatesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1_internal
}  // namespace cloud
}  // namespace google
