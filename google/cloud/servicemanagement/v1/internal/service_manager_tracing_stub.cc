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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/v1/internal/service_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace servicemanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceManagerTracingStub::ServiceManagerTracingStub(
    std::shared_ptr<ServiceManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::api::servicemanagement::v1::ListServicesResponse>
ServiceManagerTracingStub::ListServices(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServices(context, request));
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerTracingStub::GetService(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "GetService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetService(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerTracingStub::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "CreateService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerTracingStub::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "DeleteService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncDeleteService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerTracingStub::AsyncUndeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "UndeleteService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncUndeleteService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::servicemanagement::v1::ListServiceConfigsResponse>
ServiceManagerTracingStub::ListServiceConfigs(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceConfigsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "ListServiceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServiceConfigs(context, request));
}

StatusOr<google::api::Service> ServiceManagerTracingStub::GetServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "GetServiceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServiceConfig(context, request));
}

StatusOr<google::api::Service> ServiceManagerTracingStub::CreateServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "CreateServiceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateServiceConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerTracingStub::AsyncSubmitConfigSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "SubmitConfigSource");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncSubmitConfigSource(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::servicemanagement::v1::ListServiceRolloutsResponse>
ServiceManagerTracingStub::ListServiceRollouts(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "ListServiceRollouts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServiceRollouts(context, request));
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerTracingStub::GetServiceRollout(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "GetServiceRollout");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServiceRollout(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerTracingStub::AsyncCreateServiceRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "CreateServiceRollout");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateServiceRollout(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerTracingStub::GenerateConfigReport(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicemanagement.v1.ServiceManager", "GenerateConfigReport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GenerateConfigReport(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerTracingStub::AsyncGetOperation(
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

future<Status> ServiceManagerTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ServiceManagerStub> MakeServiceManagerTracingStub(
    std::shared_ptr<ServiceManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ServiceManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1_internal
}  // namespace cloud
}  // namespace google
