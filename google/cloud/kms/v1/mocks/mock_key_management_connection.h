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
// source: google/cloud/kms/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_MOCKS_MOCK_KEY_MANAGEMENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_MOCKS_MOCK_KEY_MANAGEMENT_CONNECTION_H

#include "google/cloud/kms/v1/key_management_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace kms_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `KeyManagementServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `KeyManagementServiceClient`. To do
 * so, construct an object of type `KeyManagementServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockKeyManagementServiceConnection
    : public kms_v1::KeyManagementServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::kms::v1::KeyRing>, ListKeyRings,
              (google::cloud::kms::v1::ListKeyRingsRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::kms::v1::CryptoKey>, ListCryptoKeys,
              (google::cloud::kms::v1::ListCryptoKeysRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::kms::v1::CryptoKeyVersion>,
              ListCryptoKeyVersions,
              (google::cloud::kms::v1::ListCryptoKeyVersionsRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::kms::v1::ImportJob>, ListImportJobs,
              (google::cloud::kms::v1::ListImportJobsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::KeyRing>, GetKeyRing,
              (google::cloud::kms::v1::GetKeyRingRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::CryptoKey>, GetCryptoKey,
              (google::cloud::kms::v1::GetCryptoKeyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKeyVersion>, GetCryptoKeyVersion,
      (google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::PublicKey>, GetPublicKey,
              (google::cloud::kms::v1::GetPublicKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::ImportJob>, GetImportJob,
              (google::cloud::kms::v1::GetImportJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::KeyRing>, CreateKeyRing,
              (google::cloud::kms::v1::CreateKeyRingRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::CryptoKey>, CreateCryptoKey,
              (google::cloud::kms::v1::CreateCryptoKeyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKeyVersion>,
      CreateCryptoKeyVersion,
      (google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKeyVersion>,
      ImportCryptoKeyVersion,
      (google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::ImportJob>, CreateImportJob,
              (google::cloud::kms::v1::CreateImportJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::CryptoKey>, UpdateCryptoKey,
              (google::cloud::kms::v1::UpdateCryptoKeyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKeyVersion>,
      UpdateCryptoKeyVersion,
      (google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKey>,
      UpdateCryptoKeyPrimaryVersion,
      (google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKeyVersion>,
      DestroyCryptoKeyVersion,
      (google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::CryptoKeyVersion>,
      RestoreCryptoKeyVersion,
      (google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::EncryptResponse>, Encrypt,
              (google::cloud::kms::v1::EncryptRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::DecryptResponse>, Decrypt,
              (google::cloud::kms::v1::DecryptRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::RawEncryptResponse>, RawEncrypt,
              (google::cloud::kms::v1::RawEncryptRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::RawDecryptResponse>, RawDecrypt,
              (google::cloud::kms::v1::RawDecryptRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>,
              AsymmetricSign,
              (google::cloud::kms::v1::AsymmetricSignRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>,
              AsymmetricDecrypt,
              (google::cloud::kms::v1::AsymmetricDecryptRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::MacSignResponse>, MacSign,
              (google::cloud::kms::v1::MacSignRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::kms::v1::MacVerifyResponse>, MacVerify,
              (google::cloud::kms::v1::MacVerifyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>,
      GenerateRandomBytes,
      (google::cloud::kms::v1::GenerateRandomBytesRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_MOCKS_MOCK_KEY_MANAGEMENT_CONNECTION_H
