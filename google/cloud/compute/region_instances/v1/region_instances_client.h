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
// source: google/cloud/compute/region_instances/v1/region_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCES_V1_REGION_INSTANCES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCES_V1_REGION_INSTANCES_CLIENT_H

#include "google/cloud/compute/region_instances/v1/region_instances_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionInstances resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstances
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
class RegionInstancesClient {
 public:
  explicit RegionInstancesClient(
      ExperimentalTag, std::shared_ptr<RegionInstancesConnection> connection,
      Options opts = {});
  ~RegionInstancesClient();

  ///@{
  /// @name Copy and move support
  RegionInstancesClient(RegionInstancesClient const&) = default;
  RegionInstancesClient& operator=(RegionInstancesClient const&) = default;
  RegionInstancesClient(RegionInstancesClient&&) = default;
  RegionInstancesClient& operator=(RegionInstancesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionInstancesClient const& a,
                         RegionInstancesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionInstancesClient const& a,
                         RegionInstancesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates multiple instances in a given region. Count specifies the number of
  /// instances to create.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstances/bulkInsert
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region for this request.
  /// @param bulk_insert_instance_resource  The BulkInsertInstanceResource for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instances.v1.BulkInsertRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instances/v1/region_instances.proto#L55}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::BulkInsertInstanceResource const&
          bulk_insert_instance_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates multiple instances in a given region. Count specifies the number of
  /// instances to create.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstances/bulkInsert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instances.v1.BulkInsertRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instances.v1.BulkInsertRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instances/v1/region_instances.proto#L55}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      google::cloud::cpp::compute::region_instances::v1::
          BulkInsertRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RegionInstancesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instances_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCES_V1_REGION_INSTANCES_CLIENT_H
