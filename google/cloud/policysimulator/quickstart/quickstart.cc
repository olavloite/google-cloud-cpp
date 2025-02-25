// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//! [all]
#include "google/cloud/policysimulator/v1/simulator_client.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr
        << "Usage: " << argv[0] << " project-id resource-name\n"
        << "See https://cloud.google.com/iam/docs/full-resource-names for "
           "examples of fully qualified resource names.\n";
    return 1;
  }

  namespace policysimulator = ::google::cloud::policysimulator_v1;
  auto client = policysimulator::SimulatorClient(
      policysimulator::MakeSimulatorConnection());

  auto const parent = std::string{"projects/"} + argv[1] + "/locations/global";
  auto const resource_name = std::string{argv[2]};

  google::cloud::policysimulator::v1::Replay r;
  auto& overlay = *r.mutable_config()->mutable_policy_overlay();
  overlay[resource_name] = [] {
    google::iam::v1::Policy p;
    auto& binding = *p.add_bindings();
    binding.set_role("storage.buckets.get");
    binding.add_members("user@example.com");
    return p;
  }();

  auto replay = client.CreateReplay(parent, r).get();
  if (!replay) throw std::move(replay).status();
  std::cout << replay->DebugString() << "\n";

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
//! [all]
