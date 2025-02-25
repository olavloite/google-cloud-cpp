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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/v1/internal/artifact_registry_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace artifactregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ArtifactRegistryTracingStub::ArtifactRegistryTracingStub(
    std::shared_ptr<ArtifactRegistryStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::devtools::artifactregistry::v1::ListDockerImagesResponse>
ArtifactRegistryTracingStub::ListDockerImages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ListDockerImages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDockerImages(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryTracingStub::GetDockerImage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetDockerImage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDockerImage(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::ListMavenArtifactsResponse>
ArtifactRegistryTracingStub::ListMavenArtifacts(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListMavenArtifactsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ListMavenArtifacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListMavenArtifacts(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::MavenArtifact>
ArtifactRegistryTracingStub::GetMavenArtifact(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "GetMavenArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMavenArtifact(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::ListNpmPackagesResponse>
ArtifactRegistryTracingStub::ListNpmPackages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListNpmPackagesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ListNpmPackages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNpmPackages(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::NpmPackage>
ArtifactRegistryTracingStub::GetNpmPackage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetNpmPackage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNpmPackage(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::ListPythonPackagesResponse>
ArtifactRegistryTracingStub::ListPythonPackages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListPythonPackagesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ListPythonPackages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListPythonPackages(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::PythonPackage>
ArtifactRegistryTracingStub::GetPythonPackage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "GetPythonPackage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPythonPackage(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncImportAptArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ImportAptArtifacts");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncImportAptArtifacts(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncImportYumArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ImportYumArtifacts");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncImportYumArtifacts(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::devtools::artifactregistry::v1::ListRepositoriesResponse>
ArtifactRegistryTracingStub::ListRepositories(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "ListRepositories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRepositories(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryTracingStub::GetRepository(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRepository(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "CreateRepository");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateRepository(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryTracingStub::UpdateRepository(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "UpdateRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateRepository(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "DeleteRepository");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncDeleteRepository(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::devtools::artifactregistry::v1::ListPackagesResponse>
ArtifactRegistryTracingStub::ListPackages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListPackagesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "ListPackages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListPackages(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryTracingStub::GetPackage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetPackageRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetPackage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPackage(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncDeletePackage(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeletePackageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "DeletePackage");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncDeletePackage(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::devtools::artifactregistry::v1::ListVersionsResponse>
ArtifactRegistryTracingStub::ListVersions(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListVersionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "ListVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVersions(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryTracingStub::GetVersion(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVersion(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncDeleteVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "DeleteVersion");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncDeleteVersion(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::devtools::artifactregistry::v1::ListFilesResponse>
ArtifactRegistryTracingStub::ListFiles(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListFilesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "ListFiles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListFiles(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::File>
ArtifactRegistryTracingStub::GetFile(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetFileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetFile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetFile(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::ListTagsResponse>
ArtifactRegistryTracingStub::ListTags(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListTagsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "ListTags");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListTags(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingStub::GetTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetTagRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetTag(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingStub::CreateTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::CreateTagRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "CreateTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->CreateTag(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryTracingStub::UpdateTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateTagRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "UpdateTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->UpdateTag(context, request));
}

Status ArtifactRegistryTracingStub::DeleteTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::DeleteTagRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "DeleteTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->DeleteTag(context, request));
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ArtifactRegistryTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryTracingStub::GetProjectSettings(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "GetProjectSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetProjectSettings(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryTracingStub::UpdateProjectSettings(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateProjectSettingsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "UpdateProjectSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateProjectSettings(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
ArtifactRegistryTracingStub::GetVPCSCConfig(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry", "GetVPCSCConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVPCSCConfig(context, request));
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
ArtifactRegistryTracingStub::UpdateVPCSCConfig(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.artifactregistry.v1.ArtifactRegistry",
      "UpdateVPCSCConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateVPCSCConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryTracingStub::AsyncGetOperation(
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

future<Status> ArtifactRegistryTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ArtifactRegistryStub> MakeArtifactRegistryTracingStub(
    std::shared_ptr<ArtifactRegistryStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ArtifactRegistryTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_v1_internal
}  // namespace cloud
}  // namespace google
