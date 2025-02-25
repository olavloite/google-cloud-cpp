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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_TENSORBOARD_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_TENSORBOARD_CONNECTION_H

#include "google/cloud/aiplatform/v1/tensorboard_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TensorboardServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TensorboardServiceClient`. To do
 * so, construct an object of type `TensorboardServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTensorboardServiceConnection
    : public aiplatform_v1::TensorboardServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Tensorboard>>,
      CreateTensorboard,
      (google::cloud::aiplatform::v1::CreateTensorboardRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Tensorboard>, GetTensorboard,
      (google::cloud::aiplatform::v1::GetTensorboardRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Tensorboard>>,
      UpdateTensorboard,
      (google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Tensorboard>,
              ListTensorboards,
              (google::cloud::aiplatform::v1::ListTensorboardsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteTensorboard,
      (google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>,
      ReadTensorboardUsage,
      (google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>,
      ReadTensorboardSize,
      (google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>,
      CreateTensorboardExperiment,
      (google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>,
      GetTensorboardExperiment,
      (google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>,
      UpdateTensorboardExperiment,
      (google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
           request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::TensorboardExperiment>,
              ListTensorboardExperiments,
              (google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteTensorboardExperiment,
      (google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::TensorboardRun>,
              CreateTensorboardRun,
              (google::cloud::aiplatform::v1::CreateTensorboardRunRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>,
      BatchCreateTensorboardRuns,
      (google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardRun>,
      GetTensorboardRun,
      (google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::TensorboardRun>,
              UpdateTensorboardRun,
              (google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::aiplatform::v1::TensorboardRun>,
      ListTensorboardRuns,
      (google::cloud::aiplatform::v1::ListTensorboardRunsRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteTensorboardRun,
      (google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::
                           BatchCreateTensorboardTimeSeriesResponse>,
              BatchCreateTensorboardTimeSeries,
              (google::cloud::aiplatform::v1::
                   BatchCreateTensorboardTimeSeriesRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>,
      CreateTensorboardTimeSeries,
      (google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>,
      GetTensorboardTimeSeries,
      (google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>,
      UpdateTensorboardTimeSeries,
      (google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::aiplatform::v1::TensorboardTimeSeries>,
      ListTensorboardTimeSeries,
      (google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteTensorboardTimeSeries,
      (google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::
                           BatchReadTensorboardTimeSeriesDataResponse>,
              BatchReadTensorboardTimeSeriesData,
              (google::cloud::aiplatform::v1::
                   BatchReadTensorboardTimeSeriesDataRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>,
      ReadTensorboardTimeSeriesData,
      (google::cloud::aiplatform::v1::
           ReadTensorboardTimeSeriesDataRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<
          google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>,
      ReadTensorboardBlobData,
      (google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::
                           WriteTensorboardExperimentDataResponse>,
              WriteTensorboardExperimentData,
              (google::cloud::aiplatform::v1::
                   WriteTensorboardExperimentDataRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>,
      WriteTensorboardRunData,
      (google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::aiplatform::v1::TimeSeriesDataPoint>,
      ExportTensorboardTimeSeriesData,
      (google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataRequest
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_TENSORBOARD_CONNECTION_H
