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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionUrlMapsTracingConnection::RegionUrlMapsTracingConnection(
    std::shared_ptr<compute_region_url_maps_v1::RegionUrlMapsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsTracingConnection::DeleteUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::DeleteUrlMapRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::DeleteUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteUrlMap(request));
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap>
RegionUrlMapsTracingConnection::GetUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::GetUrlMapRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::GetUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetUrlMap(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsTracingConnection::InsertUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::InsertUrlMapRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::InsertUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertUrlMap(request));
}

StreamRange<google::cloud::cpp::compute::v1::UrlMap>
RegionUrlMapsTracingConnection::ListRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::ListRegionUrlMapsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::ListRegionUrlMaps");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionUrlMaps(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::UrlMap>(std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsTracingConnection::PatchUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::PatchUrlMapRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::PatchUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchUrlMap(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsTracingConnection::UpdateUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::UpdateUrlMapRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::UpdateUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateUrlMap(request));
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
RegionUrlMapsTracingConnection::Validate(
    google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_url_maps_v1::RegionUrlMapsConnection::Validate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Validate(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_url_maps_v1::RegionUrlMapsConnection>
MakeRegionUrlMapsTracingConnection(
    std::shared_ptr<compute_region_url_maps_v1::RegionUrlMapsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionUrlMapsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1_internal
}  // namespace cloud
}  // namespace google
