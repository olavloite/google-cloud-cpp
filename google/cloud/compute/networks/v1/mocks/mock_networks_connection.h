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
// source: google/cloud/compute/networks/v1/networks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_MOCKS_MOCK_NETWORKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_MOCKS_MOCK_NETWORKS_CONNECTION_H

#include "google/cloud/compute/networks/v1/networks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_networks_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NetworksConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NetworksClient`. To do so,
 * construct an object of type `NetworksClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNetworksConnection : public compute_networks_v1::NetworksConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, AddPeering,
      (google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      DeleteNetwork,
      (google::cloud::cpp::compute::networks::v1::DeleteNetworkRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Network>, GetNetwork,
      (google::cloud::cpp::compute::networks::v1::GetNetworkRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           NetworksGetEffectiveFirewallsResponse>,
              GetEffectiveFirewalls,
              (google::cloud::cpp::compute::networks::v1::
                   GetEffectiveFirewallsRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      InsertNetwork,
      (google::cloud::cpp::compute::networks::v1::InsertNetworkRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::Network>, ListNetworks,
      (google::cloud::cpp::compute::networks::v1::ListNetworksRequest request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::ExchangedPeeringRoute>,
      ListPeeringRoutes,
      (google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      PatchNetwork,
      (google::cloud::cpp::compute::networks::v1::PatchNetworkRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      RemovePeering,
      (google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SwitchToCustomMode,
              (google::cloud::cpp::compute::networks::v1::
                   SwitchToCustomModeRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      UpdatePeering,
      (google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_MOCKS_MOCK_NETWORKS_CONNECTION_H
