// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatabaseAdminTracingStub::DatabaseAdminTracingStub(
    std::shared_ptr<DatabaseAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DatabaseAdminTracingStub::ListDatabases(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "ListDatabases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDatabases(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncCreateDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "CreateDatabase");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateDatabase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminTracingStub::GetDatabase(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "GetDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDatabase(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncUpdateDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "UpdateDatabase");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncUpdateDatabase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncUpdateDatabaseDdl(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "UpdateDatabaseDdl");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncUpdateDatabaseDdl(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status DatabaseAdminTracingStub::DropDatabase(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "DropDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DropDatabase(context, request));
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminTracingStub::GetDatabaseDdl(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "GetDatabaseDdl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDatabaseDdl(context, request));
}

StatusOr<google::iam::v1::Policy> DatabaseAdminTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> DatabaseAdminTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "CreateBackup");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateBackup(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "CopyBackup");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCopyBackup(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingStub::GetBackup(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetBackup(context, request));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingStub::UpdateBackup(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateBackup(context, request));
}

Status DatabaseAdminTracingStub::DeleteBackup(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteBackup(context, request));
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DatabaseAdminTracingStub::ListBackups(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncRestoreDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "RestoreDatabase");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncRestoreDatabase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DatabaseAdminTracingStub::ListDatabaseOperations(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.spanner.admin.database.v1.DatabaseAdmin",
                             "ListDatabaseOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDatabaseOperations(context, request));
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DatabaseAdminTracingStub::ListBackupOperations(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "ListBackupOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackupOperations(context, request));
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DatabaseAdminTracingStub::ListDatabaseRoles(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.database.v1.DatabaseAdmin", "ListDatabaseRoles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDatabaseRoles(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DatabaseAdminTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DatabaseAdminStub> MakeDatabaseAdminTracingStub(
    std::shared_ptr<DatabaseAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DatabaseAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
