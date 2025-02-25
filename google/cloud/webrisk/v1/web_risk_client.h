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
// source: google/cloud/webrisk/v1/webrisk.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_WEB_RISK_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_WEB_RISK_CLIENT_H

#include "google/cloud/webrisk/v1/web_risk_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace webrisk_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Web Risk API defines an interface to detect malicious URLs on your
/// website and in client applications.
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
class WebRiskServiceClient {
 public:
  explicit WebRiskServiceClient(
      std::shared_ptr<WebRiskServiceConnection> connection, Options opts = {});
  ~WebRiskServiceClient();

  ///@{
  /// @name Copy and move support
  WebRiskServiceClient(WebRiskServiceClient const&) = default;
  WebRiskServiceClient& operator=(WebRiskServiceClient const&) = default;
  WebRiskServiceClient(WebRiskServiceClient&&) = default;
  WebRiskServiceClient& operator=(WebRiskServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(WebRiskServiceClient const& a,
                         WebRiskServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(WebRiskServiceClient const& a,
                         WebRiskServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets the most recent threat list diffs. These diffs should be applied to
  /// a local database of hashes to keep it up-to-date. If the local database is
  /// empty or excessively out-of-date, a complete snapshot of the database will
  /// be returned. This Method only updates a single ThreatList at a time. To
  /// update multiple ThreatList databases, this method needs to be called once
  /// for each list.
  ///
  /// @param threat_type  Required. The threat list to update. Only a single ThreatType should be
  ///  specified per request. If you want to handle multiple ThreatTypes, you must
  ///  make one request per ThreatType.
  /// @param version_token  The current version token of the client for the requested list (the
  ///  client version that was received from the last successful diff).
  ///  If the client does not have a version token (this is the first time calling
  ///  ComputeThreatListDiff), this may be left empty and a full database
  ///  snapshot will be returned.
  /// @param constraints  Required. The constraints associated with this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.ComputeThreatListDiffResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.ComputeThreatListDiffRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L119}
  /// [google.cloud.webrisk.v1.ComputeThreatListDiffResponse]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L152}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
  ComputeThreatListDiff(
      google::cloud::webrisk::v1::ThreatType threat_type,
      std::string const& version_token,
      google::cloud::webrisk::v1::ComputeThreatListDiffRequest::
          Constraints const& constraints,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the most recent threat list diffs. These diffs should be applied to
  /// a local database of hashes to keep it up-to-date. If the local database is
  /// empty or excessively out-of-date, a complete snapshot of the database will
  /// be returned. This Method only updates a single ThreatList at a time. To
  /// update multiple ThreatList databases, this method needs to be called once
  /// for each list.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.webrisk.v1.ComputeThreatListDiffRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.ComputeThreatListDiffResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.ComputeThreatListDiffRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L119}
  /// [google.cloud.webrisk.v1.ComputeThreatListDiffResponse]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L152}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
  ComputeThreatListDiff(
      google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// This method is used to check whether a URI is on a given threatList.
  /// Multiple threatLists may be searched in a single query.
  /// The response will list all requested threatLists the URI was found to
  /// match. If the URI is not found on any of the requested ThreatList an
  /// empty response will be returned.
  ///
  /// @param uri  Required. The URI to be checked for matches.
  /// @param threat_types  Required. The ThreatLists to search in. Multiple ThreatLists may be
  ///  specified.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.SearchUrisResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.SearchUrisRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L204}
  /// [google.cloud.webrisk.v1.SearchUrisResponse]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L213}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::SearchUrisResponse> SearchUris(
      std::string const& uri,
      std::vector<google::cloud::webrisk::v1::ThreatType> const& threat_types,
      Options opts = {});

  // clang-format off
  ///
  /// This method is used to check whether a URI is on a given threatList.
  /// Multiple threatLists may be searched in a single query.
  /// The response will list all requested threatLists the URI was found to
  /// match. If the URI is not found on any of the requested ThreatList an
  /// empty response will be returned.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.webrisk.v1.SearchUrisRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.SearchUrisResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.SearchUrisRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L204}
  /// [google.cloud.webrisk.v1.SearchUrisResponse]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L213}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::SearchUrisResponse> SearchUris(
      google::cloud::webrisk::v1::SearchUrisRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the full hashes that match the requested hash prefix.
  /// This is used after a hash prefix is looked up in a threatList
  /// and there is a match. The client side threatList only holds partial hashes
  /// so the client must query this method to determine if there is a full
  /// hash match of a threat.
  ///
  /// @param hash_prefix  A hash prefix, consisting of the most significant 4-32 bytes of a SHA256
  ///  hash. For JSON requests, this field is base64-encoded.
  ///  Note that if this parameter is provided by a URI, it must be encoded using
  ///  the web safe base64 variant (RFC 4648).
  /// @param threat_types  Required. The ThreatLists to search in. Multiple ThreatLists may be
  ///  specified.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.SearchHashesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.SearchHashesRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L229}
  /// [google.cloud.webrisk.v1.SearchHashesResponse]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L241}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::SearchHashesResponse> SearchHashes(
      std::string const& hash_prefix,
      std::vector<google::cloud::webrisk::v1::ThreatType> const& threat_types,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the full hashes that match the requested hash prefix.
  /// This is used after a hash prefix is looked up in a threatList
  /// and there is a match. The client side threatList only holds partial hashes
  /// so the client must query this method to determine if there is a full
  /// hash match of a threat.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.webrisk.v1.SearchHashesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.SearchHashesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.SearchHashesRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L229}
  /// [google.cloud.webrisk.v1.SearchHashesResponse]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L241}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::SearchHashesResponse> SearchHashes(
      google::cloud::webrisk::v1::SearchHashesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a Submission of a URI suspected of containing phishing content to
  /// be reviewed. If the result verifies the existence of malicious phishing
  /// content, the site will be added to the [Google's Social Engineering
  /// lists](https://support.google.com/webmasters/answer/6350487/) in order to
  /// protect users that could get exposed to this threat in the future. Only
  /// allowlisted projects can use this method during Early Access. Please reach
  /// out to Sales or your customer engineer to obtain access.
  ///
  /// @param parent  Required. The name of the project that is making the submission. This
  ///  string is in the format "projects/{project_number}".
  /// @param submission  Required. The submission that contains the content of the phishing report.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.Submission])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.CreateSubmissionRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L493}
  /// [google.cloud.webrisk.v1.Submission]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L371}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::Submission> CreateSubmission(
      std::string const& parent,
      google::cloud::webrisk::v1::Submission const& submission,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a Submission of a URI suspected of containing phishing content to
  /// be reviewed. If the result verifies the existence of malicious phishing
  /// content, the site will be added to the [Google's Social Engineering
  /// lists](https://support.google.com/webmasters/answer/6350487/) in order to
  /// protect users that could get exposed to this threat in the future. Only
  /// allowlisted projects can use this method during Early Access. Please reach
  /// out to Sales or your customer engineer to obtain access.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.webrisk.v1.CreateSubmissionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.webrisk.v1.Submission])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.webrisk.v1.CreateSubmissionRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L493}
  /// [google.cloud.webrisk.v1.Submission]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L371}
  ///
  // clang-format on
  StatusOr<google::cloud::webrisk::v1::Submission> CreateSubmission(
      google::cloud::webrisk::v1::CreateSubmissionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Submits a URI suspected of containing malicious content to be reviewed.
  /// Returns a google.longrunning.Operation which, once the review is complete,
  /// is updated with its result. You can use the [Pub/Sub API]
  /// (https://cloud.google.com/pubsub) to receive notifications for the returned
  /// Operation. If the result verifies the existence of malicious content, the
  /// site will be added to the [Google's Social Engineering lists]
  /// (https://support.google.com/webmasters/answer/6350487/) in order to
  /// protect users that could get exposed to this threat in the future. Only
  /// allowlisted projects can use this method during Early Access. Please reach
  /// out to Sales or your customer engineer to obtain access.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.webrisk.v1.SubmitUriRequest].
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
  ///     [google.cloud.webrisk.v1.Submission] proto message.
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
  /// [google.cloud.webrisk.v1.Submission]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L371}
  /// [google.cloud.webrisk.v1.SubmitUriRequest]: @googleapis_reference_link{google/cloud/webrisk/v1/webrisk.proto#L508}
  ///
  // clang-format on
  future<StatusOr<google::cloud::webrisk::v1::Submission>> SubmitUri(
      google::cloud::webrisk::v1::SubmitUriRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<WebRiskServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_WEB_RISK_CLIENT_H
