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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#include "google/cloud/sql/v1/internal/sql_instances_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlInstancesServiceRestLogging::SqlInstancesServiceRestLogging(
    std::shared_ptr<SqlInstancesServiceRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::AddServerCa(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesAddServerCaRequest const&
                 request) {
        return child_->AddServerCa(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Clone(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesCloneRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesCloneRequest const& request) {
        return child_->Clone(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Delete(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesDeleteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesDeleteRequest const& request) {
        return child_->Delete(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::DemoteMaster(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const&
                 request) {
        return child_->DemoteMaster(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Export(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesExportRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesExportRequest const& request) {
        return child_->Export(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Failover(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesFailoverRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::sql::v1::SqlInstancesFailoverRequest const& request) {
        return child_->Failover(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Reencrypt(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesReencryptRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::sql::v1::SqlInstancesReencryptRequest const& request) {
        return child_->Reencrypt(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::DatabaseInstance>
SqlInstancesServiceRestLogging::Get(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesGetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesGetRequest const& request) {
        return child_->Get(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Import(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesImportRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesImportRequest const& request) {
        return child_->Import(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Insert(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesInsertRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesInsertRequest const& request) {
        return child_->Insert(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::InstancesListResponse>
SqlInstancesServiceRestLogging::List(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesListRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesListRequest const& request) {
        return child_->List(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
SqlInstancesServiceRestLogging::ListServerCas(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesListServerCasRequest const&
                 request) {
        return child_->ListServerCas(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Patch(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesPatchRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesPatchRequest const& request) {
        return child_->Patch(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::PromoteReplica(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const&
                 request) {
        return child_->PromoteReplica(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::ResetSslConfig(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const&
                 request) {
        return child_->ResetSslConfig(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Restart(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRestartRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::sql::v1::SqlInstancesRestartRequest const& request) {
        return child_->Restart(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::RestoreBackup(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const&
                 request) {
        return child_->RestoreBackup(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::RotateServerCa(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const&
                 request) {
        return child_->RotateServerCa(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::StartReplica(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesStartReplicaRequest const&
                 request) {
        return child_->StartReplica(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::StopReplica(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesStopReplicaRequest const&
                 request) {
        return child_->StopReplica(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::TruncateLog(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesTruncateLogRequest const&
                 request) {
        return child_->TruncateLog(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::Update(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesUpdateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesUpdateRequest const& request) {
        return child_->Update(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::SslCert>
SqlInstancesServiceRestLogging::CreateEphemeral(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
              request) {
        return child_->CreateEphemeral(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::RescheduleMaintenance(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::
                 SqlInstancesRescheduleMaintenanceRequest const& request) {
        return child_->RescheduleMaintenance(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
SqlInstancesServiceRestLogging::VerifyExternalSyncSettings(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::
                 SqlInstancesVerifyExternalSyncSettingsRequest const& request) {
        return child_->VerifyExternalSyncSettings(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::StartExternalSync(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
                 request) {
        return child_->StartExternalSync(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::PerformDiskShrink(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
                 request) {
        return child_->PerformDiskShrink(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
SqlInstancesServiceRestLogging::GetDiskShrinkConfig(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
              request) {
        return child_->GetDiskShrinkConfig(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestLogging::ResetReplicaSize(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
                 request) {
        return child_->ResetReplicaSize(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>
SqlInstancesServiceRestLogging::GetLatestRecoveryTime(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::
                 SqlInstancesGetLatestRecoveryTimeRequest const& request) {
        return child_->GetLatestRecoveryTime(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
