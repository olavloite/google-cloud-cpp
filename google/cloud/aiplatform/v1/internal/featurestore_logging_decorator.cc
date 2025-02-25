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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/featurestore_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeaturestoreServiceLogging::FeaturestoreServiceLogging(
    std::shared_ptr<FeaturestoreServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncCreateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::CreateFeaturestoreRequest const&
                 request) {
        return child_->AsyncCreateFeaturestore(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceLogging::GetFeaturestore(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetFeaturestoreRequest const&
                 request) { return child_->GetFeaturestore(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
FeaturestoreServiceLogging::ListFeaturestores(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListFeaturestoresRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListFeaturestoresRequest const&
                 request) {
        return child_->ListFeaturestores(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncUpdateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const&
                 request) {
        return child_->AsyncUpdateFeaturestore(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncDeleteFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const&
                 request) {
        return child_->AsyncDeleteFeaturestore(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncCreateEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::CreateEntityTypeRequest const&
                 request) {
        return child_->AsyncCreateEntityType(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceLogging::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
        return child_->GetEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
FeaturestoreServiceLogging::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListEntityTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListEntityTypesRequest const&
                 request) { return child_->ListEntityTypes(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceLogging::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::UpdateEntityTypeRequest const&
                 request) {
        return child_->UpdateEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncDeleteEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeleteEntityTypeRequest const&
                 request) {
        return child_->AsyncDeleteEntityType(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
        return child_->AsyncCreateFeature(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncBatchCreateFeatures(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const&
                 request) {
        return child_->AsyncBatchCreateFeatures(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceLogging::GetFeature(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
        return child_->GetFeature(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse>
FeaturestoreServiceLogging::ListFeatures(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListFeaturesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::ListFeaturesRequest const& request) {
        return child_->ListFeatures(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceLogging::UpdateFeature(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
        return child_->UpdateFeature(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
        return child_->AsyncDeleteFeature(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncImportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::ImportFeatureValuesRequest const&
                 request) {
        return child_->AsyncImportFeatureValues(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncBatchReadFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
                 request) {
        return child_->AsyncBatchReadFeatureValues(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncExportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::ExportFeatureValuesRequest const&
                 request) {
        return child_->AsyncExportFeatureValues(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncDeleteFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const&
                 request) {
        return child_->AsyncDeleteFeatureValues(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
FeaturestoreServiceLogging::SearchFeatures(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::SearchFeaturesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::SearchFeaturesRequest const& request) {
        return child_->SearchFeatures(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceLogging::AsyncGetOperation(
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

future<Status> FeaturestoreServiceLogging::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
