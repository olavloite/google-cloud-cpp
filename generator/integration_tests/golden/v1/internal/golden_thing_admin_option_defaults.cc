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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_option_defaults.h"
#include "generator/integration_tests/golden/v1/golden_thing_admin_connection.h"
#include "generator/integration_tests/golden/v1/golden_thing_admin_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options GoldenThingAdminDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOLDEN_KITCHEN_SINK_ENDPOINT",
      "GOLDEN_KITCHEN_SINK_EMULATOR_HOST", "GOLDEN_KITCHEN_SINK_AUTHORITY",
      "test.googleapis.com");
  options = google::cloud::internal::PopulateGrpcOptions(
      std::move(options), "GOLDEN_KITCHEN_SINK_EMULATOR_HOST");
  if (!options.has<golden_v1::GoldenThingAdminRetryPolicyOption>()) {
    options.set<golden_v1::GoldenThingAdminRetryPolicyOption>(
        golden_v1::GoldenThingAdminLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<golden_v1::GoldenThingAdminBackoffPolicyOption>()) {
    options.set<golden_v1::GoldenThingAdminBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling).clone());
  }
  if (!options.has<golden_v1::GoldenThingAdminPollingPolicyOption>()) {
    options.set<golden_v1::GoldenThingAdminPollingPolicyOption>(
        GenericPollingPolicy<
            golden_v1::GoldenThingAdminRetryPolicyOption::Type,
            golden_v1::GoldenThingAdminBackoffPolicyOption::Type>(
            options.get<golden_v1::GoldenThingAdminRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone()).clone());
  }
  if (!options.has<golden_v1::GoldenThingAdminConnectionIdempotencyPolicyOption>()) {
    options.set<golden_v1::GoldenThingAdminConnectionIdempotencyPolicyOption>(
        golden_v1::MakeDefaultGoldenThingAdminConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
