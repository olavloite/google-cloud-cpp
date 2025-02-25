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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#include "google/cloud/netapp/v1/internal/net_app_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetAppTracingConnection::NetAppTracingConnection(
    std::shared_ptr<netapp_v1::NetAppConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::netapp::v1::StoragePool>
NetAppTracingConnection::ListStoragePools(
    google::cloud::netapp::v1::ListStoragePoolsRequest request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::ListStoragePools");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListStoragePools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::netapp::v1::StoragePool>(std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::netapp::v1::StoragePool>>
NetAppTracingConnection::CreateStoragePool(
    google::cloud::netapp::v1::CreateStoragePoolRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::CreateStoragePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateStoragePool(request));
}

StatusOr<google::cloud::netapp::v1::StoragePool>
NetAppTracingConnection::GetStoragePool(
    google::cloud::netapp::v1::GetStoragePoolRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::GetStoragePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetStoragePool(request));
}

future<StatusOr<google::cloud::netapp::v1::StoragePool>>
NetAppTracingConnection::UpdateStoragePool(
    google::cloud::netapp::v1::UpdateStoragePoolRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::UpdateStoragePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateStoragePool(request));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppTracingConnection::DeleteStoragePool(
    google::cloud::netapp::v1::DeleteStoragePoolRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::DeleteStoragePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteStoragePool(request));
}

StreamRange<google::cloud::netapp::v1::Volume>
NetAppTracingConnection::ListVolumes(
    google::cloud::netapp::v1::ListVolumesRequest request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::ListVolumes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListVolumes(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::netapp::v1::Volume>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::netapp::v1::Volume> NetAppTracingConnection::GetVolume(
    google::cloud::netapp::v1::GetVolumeRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::GetVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVolume(request));
}

future<StatusOr<google::cloud::netapp::v1::Volume>>
NetAppTracingConnection::CreateVolume(
    google::cloud::netapp::v1::CreateVolumeRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::CreateVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateVolume(request));
}

future<StatusOr<google::cloud::netapp::v1::Volume>>
NetAppTracingConnection::UpdateVolume(
    google::cloud::netapp::v1::UpdateVolumeRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::UpdateVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateVolume(request));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppTracingConnection::DeleteVolume(
    google::cloud::netapp::v1::DeleteVolumeRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::DeleteVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteVolume(request));
}

future<StatusOr<google::cloud::netapp::v1::Volume>>
NetAppTracingConnection::RevertVolume(
    google::cloud::netapp::v1::RevertVolumeRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::RevertVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RevertVolume(request));
}

StreamRange<google::cloud::netapp::v1::Snapshot>
NetAppTracingConnection::ListSnapshots(
    google::cloud::netapp::v1::ListSnapshotsRequest request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::ListSnapshots");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSnapshots(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::netapp::v1::Snapshot>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::netapp::v1::Snapshot>
NetAppTracingConnection::GetSnapshot(
    google::cloud::netapp::v1::GetSnapshotRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::GetSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSnapshot(request));
}

future<StatusOr<google::cloud::netapp::v1::Snapshot>>
NetAppTracingConnection::CreateSnapshot(
    google::cloud::netapp::v1::CreateSnapshotRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::CreateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSnapshot(request));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppTracingConnection::DeleteSnapshot(
    google::cloud::netapp::v1::DeleteSnapshotRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::DeleteSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSnapshot(request));
}

future<StatusOr<google::cloud::netapp::v1::Snapshot>>
NetAppTracingConnection::UpdateSnapshot(
    google::cloud::netapp::v1::UpdateSnapshotRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::UpdateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateSnapshot(request));
}

StreamRange<google::cloud::netapp::v1::ActiveDirectory>
NetAppTracingConnection::ListActiveDirectories(
    google::cloud::netapp::v1::ListActiveDirectoriesRequest request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::ListActiveDirectories");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListActiveDirectories(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::netapp::v1::ActiveDirectory>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::netapp::v1::ActiveDirectory>
NetAppTracingConnection::GetActiveDirectory(
    google::cloud::netapp::v1::GetActiveDirectoryRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::GetActiveDirectory");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetActiveDirectory(request));
}

future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
NetAppTracingConnection::CreateActiveDirectory(
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::CreateActiveDirectory");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateActiveDirectory(request));
}

future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
NetAppTracingConnection::UpdateActiveDirectory(
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::UpdateActiveDirectory");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateActiveDirectory(request));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppTracingConnection::DeleteActiveDirectory(
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::DeleteActiveDirectory");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteActiveDirectory(request));
}

StreamRange<google::cloud::netapp::v1::KmsConfig>
NetAppTracingConnection::ListKmsConfigs(
    google::cloud::netapp::v1::ListKmsConfigsRequest request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::ListKmsConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListKmsConfigs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::netapp::v1::KmsConfig>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
NetAppTracingConnection::CreateKmsConfig(
    google::cloud::netapp::v1::CreateKmsConfigRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::CreateKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateKmsConfig(request));
}

StatusOr<google::cloud::netapp::v1::KmsConfig>
NetAppTracingConnection::GetKmsConfig(
    google::cloud::netapp::v1::GetKmsConfigRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::GetKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetKmsConfig(request));
}

future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
NetAppTracingConnection::UpdateKmsConfig(
    google::cloud::netapp::v1::UpdateKmsConfigRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::UpdateKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateKmsConfig(request));
}

future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
NetAppTracingConnection::EncryptVolumes(
    google::cloud::netapp::v1::EncryptVolumesRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::EncryptVolumes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->EncryptVolumes(request));
}

StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
NetAppTracingConnection::VerifyKmsConfig(
    google::cloud::netapp::v1::VerifyKmsConfigRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::VerifyKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->VerifyKmsConfig(request));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppTracingConnection::DeleteKmsConfig(
    google::cloud::netapp::v1::DeleteKmsConfigRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::DeleteKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteKmsConfig(request));
}

StreamRange<google::cloud::netapp::v1::Replication>
NetAppTracingConnection::ListReplications(
    google::cloud::netapp::v1::ListReplicationsRequest request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::ListReplications");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListReplications(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::netapp::v1::Replication>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::netapp::v1::Replication>
NetAppTracingConnection::GetReplication(
    google::cloud::netapp::v1::GetReplicationRequest const& request) {
  auto span = internal::MakeSpan("netapp_v1::NetAppConnection::GetReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetReplication(request));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppTracingConnection::CreateReplication(
    google::cloud::netapp::v1::CreateReplicationRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::CreateReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateReplication(request));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppTracingConnection::DeleteReplication(
    google::cloud::netapp::v1::DeleteReplicationRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::DeleteReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteReplication(request));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppTracingConnection::UpdateReplication(
    google::cloud::netapp::v1::UpdateReplicationRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::UpdateReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateReplication(request));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppTracingConnection::StopReplication(
    google::cloud::netapp::v1::StopReplicationRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::StopReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->StopReplication(request));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppTracingConnection::ResumeReplication(
    google::cloud::netapp::v1::ResumeReplicationRequest const& request) {
  auto span =
      internal::MakeSpan("netapp_v1::NetAppConnection::ResumeReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ResumeReplication(request));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppTracingConnection::ReverseReplicationDirection(
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "netapp_v1::NetAppConnection::ReverseReplicationDirection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ReverseReplicationDirection(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<netapp_v1::NetAppConnection> MakeNetAppTracingConnection(
    std::shared_ptr<netapp_v1::NetAppConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NetAppTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google
