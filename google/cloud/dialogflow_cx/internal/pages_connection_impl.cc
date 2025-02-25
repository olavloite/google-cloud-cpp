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
// source: google/cloud/dialogflow/cx/v3/page.proto

#include "google/cloud/dialogflow_cx/internal/pages_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/pages_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_cx::PagesRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_cx::PagesRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_cx::PagesBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_cx::PagesConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<dialogflow_cx::PagesConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

PagesConnectionImpl::PagesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::PagesStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      PagesConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::Page>
PagesConnectionImpl::ListPages(
    google::cloud::dialogflow::cx::v3::ListPagesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListPages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Page>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::PagesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::dialogflow::cx::v3::ListPagesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::cx::v3::ListPagesRequest const&
                       request) { return stub->ListPages(context, request); },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListPagesResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::Page> result(
            r.pages().size());
        auto& messages = *r.mutable_pages();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::Page> PagesConnectionImpl::GetPage(
    google::cloud::dialogflow::cx::v3::GetPageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPage(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::GetPageRequest const& request) {
        return stub_->GetPage(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Page>
PagesConnectionImpl::CreatePage(
    google::cloud::dialogflow::cx::v3::CreatePageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreatePage(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::CreatePageRequest const& request) {
        return stub_->CreatePage(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Page>
PagesConnectionImpl::UpdatePage(
    google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdatePage(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request) {
        return stub_->UpdatePage(context, request);
      },
      request, __func__);
}

Status PagesConnectionImpl::DeletePage(
    google::cloud::dialogflow::cx::v3::DeletePageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeletePage(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::DeletePageRequest const& request) {
        return stub_->DeletePage(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
