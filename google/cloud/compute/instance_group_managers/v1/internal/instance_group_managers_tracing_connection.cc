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
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstanceGroupManagersTracingConnection::InstanceGroupManagersTracingConnection(
    std::shared_ptr<
        compute_instance_group_managers_v1::InstanceGroupManagersConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::AbandonInstances(
    google::cloud::cpp::compute::instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "AbandonInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AbandonInstances(request));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>
InstanceGroupManagersTracingConnection::AggregatedListInstanceGroupManagers(
    google::cloud::cpp::compute::instance_group_managers::v1::
        AggregatedListInstanceGroupManagersRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "AggregatedListInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->AggregatedListInstanceGroupManagers(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::ApplyUpdatesToInstances(
    google::cloud::cpp::compute::instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "ApplyUpdatesToInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ApplyUpdatesToInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::CreateInstances(
    google::cloud::cpp::compute::instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "CreateInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::DeleteInstanceGroupManager(
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "DeleteInstanceGroupManager");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteInstanceGroupManager(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::DeleteInstances(
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "DeleteInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::DeletePerInstanceConfigs(
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "DeletePerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePerInstanceConfigs(request));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
InstanceGroupManagersTracingConnection::GetInstanceGroupManager(
    google::cloud::cpp::compute::instance_group_managers::v1::
        GetInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "GetInstanceGroupManager");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceGroupManager(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::InsertInstanceGroupManager(
    google::cloud::cpp::compute::instance_group_managers::v1::
        InsertInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "InsertInstanceGroupManager");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertInstanceGroupManager(request));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
InstanceGroupManagersTracingConnection::ListInstanceGroupManagers(
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListInstanceGroupManagersRequest request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "ListInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInstanceGroupManagers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceGroupManager>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
InstanceGroupManagersTracingConnection::ListErrors(
    google::cloud::cpp::compute::instance_group_managers::v1::ListErrorsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "ListErrors");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListErrors(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceManagedByIgmError>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListManagedInstancesResponse>
InstanceGroupManagersTracingConnection::ListManagedInstances(
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "ListManagedInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListManagedInstances(request));
}

StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
InstanceGroupManagersTracingConnection::ListPerInstanceConfigs(
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListPerInstanceConfigsRequest request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "ListPerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPerInstanceConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::PerInstanceConfig>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::PatchInstanceGroupManager(
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "PatchInstanceGroupManager");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchInstanceGroupManager(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::PatchPerInstanceConfigs(
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "PatchPerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchPerInstanceConfigs(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::RecreateInstances(
    google::cloud::cpp::compute::instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "RecreateInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RecreateInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::Resize(
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResizeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "Resize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::SetInstanceTemplate(
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "SetInstanceTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceTemplate(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::SetTargetPools(
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "SetTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetTargetPools(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersTracingConnection::UpdatePerInstanceConfigs(
    google::cloud::cpp::compute::instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_group_managers_v1::InstanceGroupManagersConnection::"
      "UpdatePerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdatePerInstanceConfigs(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_instance_group_managers_v1::InstanceGroupManagersConnection>
MakeInstanceGroupManagersTracingConnection(
    std::shared_ptr<
        compute_instance_group_managers_v1::InstanceGroupManagersConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InstanceGroupManagersTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
