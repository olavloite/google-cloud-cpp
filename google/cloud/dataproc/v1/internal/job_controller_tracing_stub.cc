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
// source: google/cloud/dataproc/v1/jobs.proto

#include "google/cloud/dataproc/v1/internal/job_controller_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

JobControllerTracingStub::JobControllerTracingStub(
    std::shared_ptr<JobControllerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerTracingStub::SubmitJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "SubmitJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->SubmitJob(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobControllerTracingStub::AsyncSubmitJobAsOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "SubmitJobAsOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncSubmitJobAsOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerTracingStub::GetJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetJob(context, request));
}

StatusOr<google::cloud::dataproc::v1::ListJobsResponse>
JobControllerTracingStub::ListJobs(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "ListJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListJobs(context, request));
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerTracingStub::UpdateJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::UpdateJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "UpdateJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->UpdateJob(context, request));
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerTracingStub::CancelJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::CancelJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "CancelJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->CancelJob(context, request));
}

Status JobControllerTracingStub::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.JobController",
                                     "DeleteJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->DeleteJob(context, request));
}

future<StatusOr<google::longrunning::Operation>>
JobControllerTracingStub::AsyncGetOperation(
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

future<Status> JobControllerTracingStub::AsyncCancelOperation(
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

std::shared_ptr<JobControllerStub> MakeJobControllerTracingStub(
    std::shared_ptr<JobControllerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<JobControllerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
