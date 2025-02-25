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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/internal/test_cases_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TestCasesTracingStub::TestCasesTracingStub(std::shared_ptr<TestCasesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCasesResponse>
TestCasesTracingStub::ListTestCases(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "ListTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTestCases(context, request));
}

Status TestCasesTracingStub::BatchDeleteTestCases(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "BatchDeleteTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->BatchDeleteTestCases(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingStub::GetTestCase(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "GetTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTestCase(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingStub::CreateTestCase(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "CreateTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTestCase(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingStub::UpdateTestCase(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "UpdateTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTestCase(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TestCasesTracingStub::AsyncRunTestCase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "RunTestCase");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncRunTestCase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TestCasesTracingStub::AsyncBatchRunTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "BatchRunTestCases");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchRunTestCases(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
TestCasesTracingStub::CalculateCoverage(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "CalculateCoverage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CalculateCoverage(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TestCasesTracingStub::AsyncImportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "ImportTestCases");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncImportTestCases(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TestCasesTracingStub::AsyncExportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "ExportTestCases");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncExportTestCases(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse>
TestCasesTracingStub::ListTestCaseResults(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "ListTestCaseResults");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTestCaseResults(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesTracingStub::GetTestCaseResult(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.TestCases",
                                     "GetTestCaseResult");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTestCaseResult(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TestCasesTracingStub::AsyncGetOperation(
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

future<Status> TestCasesTracingStub::AsyncCancelOperation(
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

std::shared_ptr<TestCasesStub> MakeTestCasesTracingStub(
    std::shared_ptr<TestCasesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TestCasesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
