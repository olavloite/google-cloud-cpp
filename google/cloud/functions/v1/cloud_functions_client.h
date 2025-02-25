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
// source: google/cloud/functions/v1/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_CLOUD_FUNCTIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_CLOUD_FUNCTIONS_CLIENT_H

#include "google/cloud/functions/v1/cloud_functions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace functions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service that application uses to manipulate triggers and functions.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class CloudFunctionsServiceClient {
 public:
  explicit CloudFunctionsServiceClient(
      std::shared_ptr<CloudFunctionsServiceConnection> connection,
      Options opts = {});
  ~CloudFunctionsServiceClient();

  ///@{
  /// @name Copy and move support
  CloudFunctionsServiceClient(CloudFunctionsServiceClient const&) = default;
  CloudFunctionsServiceClient& operator=(CloudFunctionsServiceClient const&) =
      default;
  CloudFunctionsServiceClient(CloudFunctionsServiceClient&&) = default;
  CloudFunctionsServiceClient& operator=(CloudFunctionsServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudFunctionsServiceClient const& a,
                         CloudFunctionsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudFunctionsServiceClient const& a,
                         CloudFunctionsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns a list of functions that belong to the requested project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.ListFunctionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.functions.v1.CloudFunction], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.ListFunctionsRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L738}
  ///
  // clang-format on
  StreamRange<google::cloud::functions::v1::CloudFunction> ListFunctions(
      google::cloud::functions::v1::ListFunctionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns a function with the given name from the requested project.
  ///
  /// @param name  Required. The name of the function which details should be obtained.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.functions.v1.CloudFunction])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.GetFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L727}
  ///
  // clang-format on
  StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Returns a function with the given name from the requested project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.GetFunctionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.functions.v1.CloudFunction])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.GetFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L727}
  ///
  // clang-format on
  StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      google::cloud::functions::v1::GetFunctionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new function. If a function with the given name already exists in
  /// the specified project, the long running operation returns an
  /// `ALREADY_EXISTS` error.
  ///
  /// @param location  Required. The project and location in which the function should be created,
  ///  specified in the format `projects/*/locations/*`
  /// @param function  Required. Function to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.functions.v1.CloudFunction] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.CreateFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L703}
  ///
  // clang-format on
  future<StatusOr<google::cloud::functions::v1::CloudFunction>> CreateFunction(
      std::string const& location,
      google::cloud::functions::v1::CloudFunction const& function,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new function. If a function with the given name already exists in
  /// the specified project, the long running operation returns an
  /// `ALREADY_EXISTS` error.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.CreateFunctionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.functions.v1.CloudFunction] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.CreateFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L703}
  ///
  // clang-format on
  future<StatusOr<google::cloud::functions::v1::CloudFunction>> CreateFunction(
      google::cloud::functions::v1::CreateFunctionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates existing function.
  ///
  /// @param function  Required. New version of the function.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.functions.v1.CloudFunction] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.UpdateFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L718}
  ///
  // clang-format on
  future<StatusOr<google::cloud::functions::v1::CloudFunction>> UpdateFunction(
      google::cloud::functions::v1::CloudFunction const& function,
      Options opts = {});

  // clang-format off
  ///
  /// Updates existing function.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.UpdateFunctionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.functions.v1.CloudFunction] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CloudFunction]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L205}
  /// [google.cloud.functions.v1.UpdateFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L718}
  ///
  // clang-format on
  future<StatusOr<google::cloud::functions::v1::CloudFunction>> UpdateFunction(
      google::cloud::functions::v1::UpdateFunctionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a function with the given name from the specified project. If the
  /// given function is used by some trigger, the trigger is updated to
  /// remove this function.
  ///
  /// @param name  Required. The name of the function which should be deleted.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.functions.v1.OperationMetadataV1] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.DeleteFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L776}
  /// [google.cloud.functions.v1.OperationMetadataV1]: @googleapis_reference_link{google/cloud/functions/v1/operations.proto#L43}
  ///
  // clang-format on
  future<StatusOr<google::cloud::functions::v1::OperationMetadataV1>>
  DeleteFunction(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a function with the given name from the specified project. If the
  /// given function is used by some trigger, the trigger is updated to
  /// remove this function.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.DeleteFunctionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.functions.v1.OperationMetadataV1] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.DeleteFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L776}
  /// [google.cloud.functions.v1.OperationMetadataV1]: @googleapis_reference_link{google/cloud/functions/v1/operations.proto#L43}
  ///
  // clang-format on
  future<StatusOr<google::cloud::functions::v1::OperationMetadataV1>>
  DeleteFunction(
      google::cloud::functions::v1::DeleteFunctionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Synchronously invokes a deployed Cloud Function. To be used for testing
  /// purposes as very limited traffic is allowed. For more information on
  /// the actual limits, refer to
  /// [Rate Limits](https://cloud.google.com/functions/quotas#rate_limits).
  ///
  /// @param name  Required. The name of the function to be called.
  /// @param data  Required. Input to be passed to the function.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.functions.v1.CallFunctionResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CallFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L787}
  /// [google.cloud.functions.v1.CallFunctionResponse]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L801}
  ///
  // clang-format on
  StatusOr<google::cloud::functions::v1::CallFunctionResponse> CallFunction(
      std::string const& name, std::string const& data, Options opts = {});

  // clang-format off
  ///
  /// Synchronously invokes a deployed Cloud Function. To be used for testing
  /// purposes as very limited traffic is allowed. For more information on
  /// the actual limits, refer to
  /// [Rate Limits](https://cloud.google.com/functions/quotas#rate_limits).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.CallFunctionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.functions.v1.CallFunctionResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.CallFunctionRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L787}
  /// [google.cloud.functions.v1.CallFunctionResponse]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L801}
  ///
  // clang-format on
  StatusOr<google::cloud::functions::v1::CallFunctionResponse> CallFunction(
      google::cloud::functions::v1::CallFunctionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns a signed URL for uploading a function source code.
  /// For more information about the signed URL usage see:
  /// https://cloud.google.com/storage/docs/access-control/signed-urls.
  /// Once the function source code upload is complete, the used signed
  /// URL should be provided in CreateFunction or UpdateFunction request
  /// as a reference to the function source code.
  ///
  /// When uploading source code to the generated signed URL, please follow
  /// these restrictions:
  ///
  /// * Source file type should be a zip file.
  /// * Source file size should not exceed 100MB limit.
  /// * No credentials should be attached - the signed URLs provide access to the
  ///   target bucket using internal service identity; if credentials were
  ///   attached, the identity from the credentials would be used, but that
  ///   identity does not have permissions to upload files to the URL.
  ///
  /// When making an HTTP PUT request, these two headers must be specified:
  ///
  /// * `content-type: application/zip`
  /// * `x-goog-content-length-range: 0,104857600`
  ///
  /// And this header must NOT be specified:
  ///
  /// * `Authorization: Bearer YOUR_TOKEN`
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.GenerateUploadUrlRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.functions.v1.GenerateUploadUrlResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.GenerateUploadUrlRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L815}
  /// [google.cloud.functions.v1.GenerateUploadUrlResponse]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L843}
  ///
  // clang-format on
  StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      google::cloud::functions::v1::GenerateUploadUrlRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns a signed URL for downloading deployed function source code.
  /// The URL is only valid for a limited period and must be used within
  /// minutes after generation.
  /// For more information about the signed URL usage, see:
  /// https://cloud.google.com/storage/docs/access-control/signed-urls
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.functions.v1.GenerateDownloadUrlRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.functions.v1.GenerateDownloadUrlResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.functions.v1.GenerateDownloadUrlRequest]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L851}
  /// [google.cloud.functions.v1.GenerateDownloadUrlResponse]: @googleapis_reference_link{google/cloud/functions/v1/functions.proto#L862}
  ///
  // clang-format on
  StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      google::cloud::functions::v1::GenerateDownloadUrlRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the IAM access control policy on the specified function.
  /// Replaces any existing policy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.SetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  /// [google.iam.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Gets the IAM access control policy for a function.
  /// Returns an empty policy if the function exists and does not have a policy
  /// set.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.GetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Tests the specified permissions against the IAM access control policy
  /// for a function.
  /// If the function does not exist, this returns an empty set of
  /// permissions, not a NOT_FOUND error.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.TestIamPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  // clang-format on
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudFunctionsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_CLOUD_FUNCTIONS_CLIENT_H
