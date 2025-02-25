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
// source: google/monitoring/v3/notification_service.proto

#include "google/cloud/monitoring/v3/internal/notification_channel_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotificationChannelServiceTracingStub::NotificationChannelServiceTracingStub(
    std::shared_ptr<NotificationChannelServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::monitoring::v3::ListNotificationChannelDescriptorsResponse>
NotificationChannelServiceTracingStub::ListNotificationChannelDescriptors(
    grpc::ClientContext& context,
    google::monitoring::v3::ListNotificationChannelDescriptorsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "ListNotificationChannelDescriptors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListNotificationChannelDescriptors(context, request));
}

StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceTracingStub::GetNotificationChannelDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "GetNotificationChannelDescriptor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetNotificationChannelDescriptor(context, request));
}

StatusOr<google::monitoring::v3::ListNotificationChannelsResponse>
NotificationChannelServiceTracingStub::ListNotificationChannels(
    grpc::ClientContext& context,
    google::monitoring::v3::ListNotificationChannelsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "ListNotificationChannels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNotificationChannels(context, request));
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingStub::GetNotificationChannel(
    grpc::ClientContext& context,
    google::monitoring::v3::GetNotificationChannelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "GetNotificationChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNotificationChannel(context, request));
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingStub::CreateNotificationChannel(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateNotificationChannelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "CreateNotificationChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateNotificationChannel(context, request));
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingStub::UpdateNotificationChannel(
    grpc::ClientContext& context,
    google::monitoring::v3::UpdateNotificationChannelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "UpdateNotificationChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateNotificationChannel(context, request));
}

Status NotificationChannelServiceTracingStub::DeleteNotificationChannel(
    grpc::ClientContext& context,
    google::monitoring::v3::DeleteNotificationChannelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "DeleteNotificationChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteNotificationChannel(context, request));
}

Status
NotificationChannelServiceTracingStub::SendNotificationChannelVerificationCode(
    grpc::ClientContext& context,
    google::monitoring::v3::
        SendNotificationChannelVerificationCodeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "SendNotificationChannelVerificationCode");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SendNotificationChannelVerificationCode(context, request));
}

StatusOr<google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
NotificationChannelServiceTracingStub::GetNotificationChannelVerificationCode(
    grpc::ClientContext& context,
    google::monitoring::v3::GetNotificationChannelVerificationCodeRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "GetNotificationChannelVerificationCode");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetNotificationChannelVerificationCode(context, request));
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceTracingStub::VerifyNotificationChannel(
    grpc::ClientContext& context,
    google::monitoring::v3::VerifyNotificationChannelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.v3.NotificationChannelService",
                             "VerifyNotificationChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->VerifyNotificationChannel(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<NotificationChannelServiceStub>
MakeNotificationChannelServiceTracingStub(
    std::shared_ptr<NotificationChannelServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NotificationChannelServiceTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
