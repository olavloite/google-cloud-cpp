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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_DATASETS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_DATASETS_CONNECTION_H

#include "google/cloud/dialogflow_es/conversation_datasets_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ConversationDatasetsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ConversationDatasetsClient`. To do
 * so, construct an object of type `ConversationDatasetsClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockConversationDatasetsConnection
    : public dialogflow_es::ConversationDatasetsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>,
      CreateConversationDataset,
      (google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::ConversationDataset>,
      GetConversationDataset,
      (google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::dialogflow::v2::ConversationDataset>,
      ListConversationDatasets,
      (google::cloud::dialogflow::v2::ListConversationDatasetsRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::
                          DeleteConversationDatasetOperationMetadata>>,
      DeleteConversationDataset,
      (google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::
                          ImportConversationDataOperationResponse>>,
      ImportConversationData,
      (google::cloud::dialogflow::v2::ImportConversationDataRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_DATASETS_CONNECTION_H
