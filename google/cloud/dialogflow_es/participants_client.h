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
// source: google/cloud/dialogflow/v2/participant.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_PARTICIPANTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_PARTICIPANTS_CLIENT_H

#include "google/cloud/dialogflow_es/participants_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Participants][google.cloud.dialogflow.v2.Participant].
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
/// [google.cloud.dialogflow.v2.Participant]:
/// @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
///
class ParticipantsClient {
 public:
  explicit ParticipantsClient(
      std::shared_ptr<ParticipantsConnection> connection, Options opts = {});
  ~ParticipantsClient();

  ///@{
  /// @name Copy and move support
  ParticipantsClient(ParticipantsClient const&) = default;
  ParticipantsClient& operator=(ParticipantsClient const&) = default;
  ParticipantsClient(ParticipantsClient&&) = default;
  ParticipantsClient& operator=(ParticipantsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ParticipantsClient const& a,
                         ParticipantsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ParticipantsClient const& a,
                         ParticipantsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new participant in a conversation.
  ///
  /// @param parent  Required. Resource identifier of the conversation adding the participant.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>`.
  /// @param participant  Required. The participant to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Participant])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateParticipantRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L319}
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Participant> CreateParticipant(
      std::string const& parent,
      google::cloud::dialogflow::v2::Participant const& participant,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new participant in a conversation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateParticipantRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Participant])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateParticipantRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L319}
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Participant> CreateParticipant(
      google::cloud::dialogflow::v2::CreateParticipantRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a conversation participant.
  ///
  /// @param name  Required. The name of the participant. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation
  ///  ID>/participants/<Participant ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Participant])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.GetParticipantRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L336}
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Participant> GetParticipant(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a conversation participant.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetParticipantRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Participant])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.GetParticipantRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L336}
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Participant> GetParticipant(
      google::cloud::dialogflow::v2::GetParticipantRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all participants in the specified conversation.
  ///
  /// @param parent  Required. The conversation to list all participants from.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>`.
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
  ///     [google.cloud.dialogflow.v2.Participant], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ListParticipantsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L350}
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Participant> ListParticipants(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all participants in the specified conversation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListParticipantsRequest].
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
  ///     [google.cloud.dialogflow.v2.Participant], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ListParticipantsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L350}
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Participant> ListParticipants(
      google::cloud::dialogflow::v2::ListParticipantsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified participant.
  ///
  /// @param participant  Required. The participant to update.
  /// @param update_mask  Required. The mask to specify which fields to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Participant])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  /// [google.cloud.dialogflow.v2.UpdateParticipantRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L383}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Participant> UpdateParticipant(
      google::cloud::dialogflow::v2::Participant const& participant,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified participant.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.UpdateParticipantRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Participant])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Participant]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L178}
  /// [google.cloud.dialogflow.v2.UpdateParticipantRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L383}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Participant> UpdateParticipant(
      google::cloud::dialogflow::v2::UpdateParticipantRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Adds a text (chat, for example), or audio (phone recording, for example)
  /// message from a participant into the conversation.
  ///
  /// Note: Always use agent versions for production traffic
  /// sent to virtual agents. See [Versions and
  /// environments](https://cloud.google.com/dialogflow/es/docs/agents-versions).
  ///
  /// @param participant  Required. The name of the participant this text comes from.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>/participants/<Participant ID>`.
  /// @param text_input  The natural language text to be processed.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.AnalyzeContentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.AnalyzeContentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L394}
  /// [google.cloud.dialogflow.v2.AnalyzeContentResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L452}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(std::string const& participant,
                 google::cloud::dialogflow::v2::TextInput const& text_input,
                 Options opts = {});

  // clang-format off
  ///
  /// Adds a text (chat, for example), or audio (phone recording, for example)
  /// message from a participant into the conversation.
  ///
  /// Note: Always use agent versions for production traffic
  /// sent to virtual agents. See [Versions and
  /// environments](https://cloud.google.com/dialogflow/es/docs/agents-versions).
  ///
  /// @param participant  Required. The name of the participant this text comes from.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>/participants/<Participant ID>`.
  /// @param event_input  An input event to send to Dialogflow.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.AnalyzeContentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.AnalyzeContentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L394}
  /// [google.cloud.dialogflow.v2.AnalyzeContentResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L452}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(std::string const& participant,
                 google::cloud::dialogflow::v2::EventInput const& event_input,
                 Options opts = {});

  // clang-format off
  ///
  /// Adds a text (chat, for example), or audio (phone recording, for example)
  /// message from a participant into the conversation.
  ///
  /// Note: Always use agent versions for production traffic
  /// sent to virtual agents. See [Versions and
  /// environments](https://cloud.google.com/dialogflow/es/docs/agents-versions).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.AnalyzeContentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.AnalyzeContentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.AnalyzeContentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L394}
  /// [google.cloud.dialogflow.v2.AnalyzeContentResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L452}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(
      google::cloud::dialogflow::v2::AnalyzeContentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Adds a text (chat, for example), or audio (phone recording, for example)
  /// message from a participant into the conversation.
  /// Note: This method is only available through the gRPC API (not REST).
  ///
  /// The top-level message sent to the client by the server is
  /// `StreamingAnalyzeContentResponse`. Multiple response messages can be
  /// returned in order. The first one or more messages contain the
  /// `recognition_result` field. Each result represents a more complete
  /// transcript of what the user said. The next message contains the
  /// `reply_text` field and potentially the `reply_audio` field. The message can
  /// also contain the `automated_agent_reply` field.
  ///
  /// Note: Always use agent versions for production traffic
  /// sent to virtual agents. See [Versions and
  /// environments](https://cloud.google.com/dialogflow/es/docs/agents-versions).
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return An object representing the bidirectional streaming
  ///     RPC. Applications can send multiple request messages and receive
  ///     multiple response messages through this API. Bidirectional streaming
  ///     RPCs can impose restrictions on the sequence of request and response
  ///     messages. Please consult the service documentation for details.
  ///     The request message type ([google.cloud.dialogflow.v2.StreamingAnalyzeContentRequest]) and response messages
  ///     ([google.cloud.dialogflow.v2.StreamingAnalyzeContentResponse]) are mapped to C++ classes using the
  ///     [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.StreamingAnalyzeContentRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L547}
  /// [google.cloud.dialogflow.v2.StreamingAnalyzeContentResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L641}
  ///
  // clang-format on
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
      google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
  AsyncStreamingAnalyzeContent(Options opts = {});

  // clang-format off
  ///
  /// Gets suggested articles for a participant based on specific historical
  /// messages.
  ///
  /// @param parent  Required. The name of the participant to fetch suggestion for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>/participants/<Participant ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SuggestArticlesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.SuggestArticlesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L695}
  /// [google.cloud.dialogflow.v2.SuggestArticlesResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L730}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
  SuggestArticles(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Gets suggested articles for a participant based on specific historical
  /// messages.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.SuggestArticlesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SuggestArticlesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.SuggestArticlesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L695}
  /// [google.cloud.dialogflow.v2.SuggestArticlesResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L730}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
  SuggestArticles(
      google::cloud::dialogflow::v2::SuggestArticlesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets suggested faq answers for a participant based on specific historical
  /// messages.
  ///
  /// @param parent  Required. The name of the participant to fetch suggestion for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>/participants/<Participant ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SuggestFaqAnswersResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.SuggestFaqAnswersRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L752}
  /// [google.cloud.dialogflow.v2.SuggestFaqAnswersResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L786}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
  SuggestFaqAnswers(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Gets suggested faq answers for a participant based on specific historical
  /// messages.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.SuggestFaqAnswersRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SuggestFaqAnswersResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.SuggestFaqAnswersRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L752}
  /// [google.cloud.dialogflow.v2.SuggestFaqAnswersResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L786}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
  SuggestFaqAnswers(
      google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets smart replies for a participant based on specific historical
  /// messages.
  ///
  /// @param parent  Required. The name of the participant to fetch suggestion for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/conversations/<Conversation ID>/participants/<Participant ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SuggestSmartRepliesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.SuggestSmartRepliesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L808}
  /// [google.cloud.dialogflow.v2.SuggestSmartRepliesResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L841}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
  SuggestSmartReplies(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Gets smart replies for a participant based on specific historical
  /// messages.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.SuggestSmartRepliesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SuggestSmartRepliesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.SuggestSmartRepliesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L808}
  /// [google.cloud.dialogflow.v2.SuggestSmartRepliesResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/participant.proto#L841}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
  SuggestSmartReplies(
      google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ParticipantsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_PARTICIPANTS_CLIENT_H
