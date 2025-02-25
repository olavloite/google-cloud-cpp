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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#include "google/cloud/dialogflow_cx/internal/flows_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/flow.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FlowsLogging::FlowsLogging(std::shared_ptr<FlowsStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> FlowsLogging::CreateFlow(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request) {
        return child_->CreateFlow(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status FlowsLogging::DeleteFlow(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::DeleteFlowRequest const& request) {
        return child_->DeleteFlow(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListFlowsResponse>
FlowsLogging::ListFlows(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListFlowsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::ListFlowsRequest const& request) {
        return child_->ListFlows(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> FlowsLogging::GetFlow(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::GetFlowRequest const& request) {
        return child_->GetFlow(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> FlowsLogging::UpdateFlow(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request) {
        return child_->UpdateFlow(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> FlowsLogging::AsyncTrainFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request) {
        return child_->AsyncTrainFlow(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
FlowsLogging::ValidateFlow(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ValidateFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::ValidateFlowRequest const&
                 request) { return child_->ValidateFlow(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
FlowsLogging::GetFlowValidationResult(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::
                 GetFlowValidationResultRequest const& request) {
        return child_->GetFlowValidationResult(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> FlowsLogging::AsyncImportFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request) {
        return child_->AsyncImportFlow(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> FlowsLogging::AsyncExportFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request) {
        return child_->AsyncExportFlow(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FlowsLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> FlowsLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
