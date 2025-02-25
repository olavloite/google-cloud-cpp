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
// source: google/cloud/advisorynotifications/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ADVISORYNOTIFICATIONS_V1_ADVISORY_NOTIFICATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ADVISORYNOTIFICATIONS_V1_ADVISORY_NOTIFICATIONS_CLIENT_H

#include "google/cloud/advisorynotifications/v1/advisory_notifications_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace advisorynotifications_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage Security and Privacy Notifications.
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
class AdvisoryNotificationsServiceClient {
 public:
  explicit AdvisoryNotificationsServiceClient(
      std::shared_ptr<AdvisoryNotificationsServiceConnection> connection,
      Options opts = {});
  ~AdvisoryNotificationsServiceClient();

  ///@{
  /// @name Copy and move support
  AdvisoryNotificationsServiceClient(
      AdvisoryNotificationsServiceClient const&) = default;
  AdvisoryNotificationsServiceClient& operator=(
      AdvisoryNotificationsServiceClient const&) = default;
  AdvisoryNotificationsServiceClient(AdvisoryNotificationsServiceClient&&) =
      default;
  AdvisoryNotificationsServiceClient& operator=(
      AdvisoryNotificationsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AdvisoryNotificationsServiceClient const& a,
                         AdvisoryNotificationsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AdvisoryNotificationsServiceClient const& a,
                         AdvisoryNotificationsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists notifications under a given parent.
  ///
  /// @param parent  Required. The parent, which owns this collection of notifications.
  ///  Must be of the form "organizations/{organization}/locations/{location}".
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
  ///     [google.cloud.advisorynotifications.v1.Notification], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.advisorynotifications.v1.ListNotificationsRequest]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L212}
  /// [google.cloud.advisorynotifications.v1.Notification]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L115}
  ///
  // clang-format on
  StreamRange<google::cloud::advisorynotifications::v1::Notification>
  ListNotifications(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists notifications under a given parent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.advisorynotifications.v1.ListNotificationsRequest].
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
  ///     [google.cloud.advisorynotifications.v1.Notification], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.advisorynotifications.v1.ListNotificationsRequest]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L212}
  /// [google.cloud.advisorynotifications.v1.Notification]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L115}
  ///
  // clang-format on
  StreamRange<google::cloud::advisorynotifications::v1::Notification>
  ListNotifications(
      google::cloud::advisorynotifications::v1::ListNotificationsRequest
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a notification.
  ///
  /// @param name  Required. A name of the notification to retrieve.
  ///  Format:
  ///  organizations/{organization}/locations/{location}/notifications/{notification}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.advisorynotifications.v1.Notification])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.advisorynotifications.v1.GetNotificationRequest]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L259}
  /// [google.cloud.advisorynotifications.v1.Notification]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L115}
  ///
  // clang-format on
  StatusOr<google::cloud::advisorynotifications::v1::Notification>
  GetNotification(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a notification.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.advisorynotifications.v1.GetNotificationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.advisorynotifications.v1.Notification])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.advisorynotifications.v1.GetNotificationRequest]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L259}
  /// [google.cloud.advisorynotifications.v1.Notification]: @googleapis_reference_link{google/cloud/advisorynotifications/v1/service.proto#L115}
  ///
  // clang-format on
  StatusOr<google::cloud::advisorynotifications::v1::Notification>
  GetNotification(
      google::cloud::advisorynotifications::v1::GetNotificationRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<AdvisoryNotificationsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace advisorynotifications_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ADVISORYNOTIFICATIONS_V1_ADVISORY_NOTIFICATIONS_CLIENT_H
