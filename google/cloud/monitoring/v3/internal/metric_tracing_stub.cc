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
// source: google/monitoring/v3/metric_service.proto

#include "google/cloud/monitoring/v3/internal/metric_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MetricServiceTracingStub::MetricServiceTracingStub(
    std::shared_ptr<MetricServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::monitoring::v3::ListMonitoredResourceDescriptorsResponse>
MetricServiceTracingStub::ListMonitoredResourceDescriptors(
    grpc::ClientContext& context,
    google::monitoring::v3::ListMonitoredResourceDescriptorsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "ListMonitoredResourceDescriptors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListMonitoredResourceDescriptors(context, request));
}

StatusOr<google::api::MonitoredResourceDescriptor>
MetricServiceTracingStub::GetMonitoredResourceDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "GetMonitoredResourceDescriptor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetMonitoredResourceDescriptor(context, request));
}

StatusOr<google::monitoring::v3::ListMetricDescriptorsResponse>
MetricServiceTracingStub::ListMetricDescriptors(
    grpc::ClientContext& context,
    google::monitoring::v3::ListMetricDescriptorsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "ListMetricDescriptors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListMetricDescriptors(context, request));
}

StatusOr<google::api::MetricDescriptor>
MetricServiceTracingStub::GetMetricDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::GetMetricDescriptorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "GetMetricDescriptor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMetricDescriptor(context, request));
}

StatusOr<google::api::MetricDescriptor>
MetricServiceTracingStub::CreateMetricDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateMetricDescriptorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "CreateMetricDescriptor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateMetricDescriptor(context, request));
}

Status MetricServiceTracingStub::DeleteMetricDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::DeleteMetricDescriptorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "DeleteMetricDescriptor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteMetricDescriptor(context, request));
}

StatusOr<google::monitoring::v3::ListTimeSeriesResponse>
MetricServiceTracingStub::ListTimeSeries(
    grpc::ClientContext& context,
    google::monitoring::v3::ListTimeSeriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "ListTimeSeries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTimeSeries(context, request));
}

Status MetricServiceTracingStub::CreateTimeSeries(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "CreateTimeSeries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTimeSeries(context, request));
}

Status MetricServiceTracingStub::CreateServiceTimeSeries(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "CreateServiceTimeSeries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateServiceTimeSeries(context, request));
}

future<Status> MetricServiceTracingStub::AsyncCreateTimeSeries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.monitoring.v3.MetricService",
                                     "CreateTimeSeries");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateTimeSeries(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MetricServiceStub> MakeMetricServiceTracingStub(
    std::shared_ptr<MetricServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MetricServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
