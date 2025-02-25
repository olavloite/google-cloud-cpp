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
// source:
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_MOCKS_MOCK_INSTANCE_GROUP_MANAGERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_MOCKS_MOCK_INSTANCE_GROUP_MANAGERS_CONNECTION_H

#include "google/cloud/compute/instance_group_managers/v1/instance_group_managers_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `InstanceGroupManagersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `InstanceGroupManagersClient`. To do
 * so, construct an object of type `InstanceGroupManagersClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockInstanceGroupManagersConnection
    : public compute_instance_group_managers_v1::
          InstanceGroupManagersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AbandonInstances,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   AbandonInstancesRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>,
      AggregatedListInstanceGroupManagers,
      (google::cloud::cpp::compute::instance_group_managers::v1::
           AggregatedListInstanceGroupManagersRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              ApplyUpdatesToInstances,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   ApplyUpdatesToInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CreateInstances,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   CreateInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceGroupManager,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   DeleteInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstances,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   DeleteInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeletePerInstanceConfigs,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   DeletePerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>,
              GetInstanceGroupManager,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   GetInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceGroupManager,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   InsertInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>,
      ListInstanceGroupManagers,
      (google::cloud::cpp::compute::instance_group_managers::v1::
           ListInstanceGroupManagersRequest request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>,
      ListErrors,
      (google::cloud::cpp::compute::instance_group_managers::v1::
           ListErrorsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           InstanceGroupManagersListManagedInstancesResponse>,
              ListManagedInstances,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   ListManagedInstancesRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>,
              ListPerInstanceConfigs,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   ListPerInstanceConfigsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInstanceGroupManager,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   PatchInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPerInstanceConfigs,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   PatchPerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RecreateInstances,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   RecreateInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Resize,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   ResizeRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetInstanceTemplate,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   SetInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetTargetPools,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   SetTargetPoolsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdatePerInstanceConfigs,
              (google::cloud::cpp::compute::instance_group_managers::v1::
                   UpdatePerInstanceConfigsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_MOCKS_MOCK_INSTANCE_GROUP_MANAGERS_CONNECTION_H
