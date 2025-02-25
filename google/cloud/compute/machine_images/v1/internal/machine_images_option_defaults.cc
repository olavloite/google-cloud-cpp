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
// source: google/cloud/compute/machine_images/v1/machine_images.proto

#include "google/cloud/compute/machine_images/v1/internal/machine_images_option_defaults.h"
#include "google/cloud/compute/machine_images/v1/machine_images_connection.h"
#include "google/cloud/compute/machine_images/v1/machine_images_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_machine_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options MachineImagesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_MACHINE_IMAGES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_MACHINE_IMAGES_AUTHORITY", "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options
           .has<compute_machine_images_v1::MachineImagesRetryPolicyOption>()) {
    options.set<compute_machine_images_v1::MachineImagesRetryPolicyOption>(
        compute_machine_images_v1::MachineImagesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          compute_machine_images_v1::MachineImagesBackoffPolicyOption>()) {
    options.set<compute_machine_images_v1::MachineImagesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          compute_machine_images_v1::MachineImagesPollingPolicyOption>()) {
    options.set<compute_machine_images_v1::MachineImagesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_machine_images_v1::MachineImagesRetryPolicyOption::Type,
            compute_machine_images_v1::MachineImagesBackoffPolicyOption::Type>(
            options
                .get<
                    compute_machine_images_v1::MachineImagesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_machine_images_v1::
                       MachineImagesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_machine_images_v1::
                    MachineImagesConnectionIdempotencyPolicyOption>(
        compute_machine_images_v1::
            MakeDefaultMachineImagesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_images_v1_internal
}  // namespace cloud
}  // namespace google
