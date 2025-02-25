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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PublicAdvertisedPrefixesTracingConnection::
    PublicAdvertisedPrefixesTracingConnection(
        std::shared_ptr<compute_public_advertised_prefixes_v1::
                            PublicAdvertisedPrefixesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesTracingConnection::DeletePublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        DeletePublicAdvertisedPrefixRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_public_advertised_prefixes_v1::"
      "PublicAdvertisedPrefixesConnection::DeletePublicAdvertisedPrefix");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePublicAdvertisedPrefix(request));
}

StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesTracingConnection::GetPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        GetPublicAdvertisedPrefixRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_public_advertised_prefixes_v1::"
      "PublicAdvertisedPrefixesConnection::GetPublicAdvertisedPrefix");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPublicAdvertisedPrefix(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesTracingConnection::InsertPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        InsertPublicAdvertisedPrefixRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_public_advertised_prefixes_v1::"
      "PublicAdvertisedPrefixesConnection::InsertPublicAdvertisedPrefix");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertPublicAdvertisedPrefix(request));
}

StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesTracingConnection::ListPublicAdvertisedPrefixes(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        ListPublicAdvertisedPrefixesRequest request) {
  auto span = internal::MakeSpan(
      "compute_public_advertised_prefixes_v1::"
      "PublicAdvertisedPrefixesConnection::ListPublicAdvertisedPrefixes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPublicAdvertisedPrefixes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>(std::move(span),
                                                               std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesTracingConnection::PatchPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        PatchPublicAdvertisedPrefixRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_public_advertised_prefixes_v1::"
      "PublicAdvertisedPrefixesConnection::PatchPublicAdvertisedPrefix");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchPublicAdvertisedPrefix(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_public_advertised_prefixes_v1::PublicAdvertisedPrefixesConnection>
MakePublicAdvertisedPrefixesTracingConnection(
    std::shared_ptr<compute_public_advertised_prefixes_v1::
                        PublicAdvertisedPrefixesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PublicAdvertisedPrefixesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_internal
}  // namespace cloud
}  // namespace google
