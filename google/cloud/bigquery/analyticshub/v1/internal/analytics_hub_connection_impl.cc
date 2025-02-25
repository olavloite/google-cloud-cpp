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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_connection_impl.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<bigquery_analyticshub_v1::AnalyticsHubServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<bigquery_analyticshub_v1::AnalyticsHubServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<bigquery_analyticshub_v1::AnalyticsHubServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    bigquery_analyticshub_v1::AnalyticsHubServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<bigquery_analyticshub_v1::
               AnalyticsHubServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

AnalyticsHubServiceConnectionImpl::AnalyticsHubServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquery_analyticshub_v1_internal::AnalyticsHubServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AnalyticsHubServiceConnection::options())) {}

StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnectionImpl::ListDataExchanges(
    google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDataExchanges(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_analyticshub_v1::AnalyticsHubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::analyticshub::v1::
              ListDataExchangesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::analyticshub::v1::
                       ListDataExchangesRequest const& request) {
              return stub->ListDataExchanges(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse
             r) {
        std::vector<google::cloud::bigquery::analyticshub::v1::DataExchange>
            result(r.data_exchanges().size());
        auto& messages = *r.mutable_data_exchanges();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnectionImpl::ListOrgDataExchanges(
    google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListOrgDataExchanges(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_analyticshub_v1::AnalyticsHubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::analyticshub::v1::
              ListOrgDataExchangesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::analyticshub::v1::
                       ListOrgDataExchangesRequest const& request) {
              return stub->ListOrgDataExchanges(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse
             r) {
        std::vector<google::cloud::bigquery::analyticshub::v1::DataExchange>
            result(r.data_exchanges().size());
        auto& messages = *r.mutable_data_exchanges();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnectionImpl::GetDataExchange(
    google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDataExchange(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::
                 GetDataExchangeRequest const& request) {
        return stub_->GetDataExchange(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnectionImpl::CreateDataExchange(
    google::cloud::bigquery::analyticshub::v1::CreateDataExchangeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDataExchange(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::
                 CreateDataExchangeRequest const& request) {
        return stub_->CreateDataExchange(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnectionImpl::UpdateDataExchange(
    google::cloud::bigquery::analyticshub::v1::UpdateDataExchangeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDataExchange(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::
                 UpdateDataExchangeRequest const& request) {
        return stub_->UpdateDataExchange(context, request);
      },
      request, __func__);
}

Status AnalyticsHubServiceConnectionImpl::DeleteDataExchange(
    google::cloud::bigquery::analyticshub::v1::DeleteDataExchangeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDataExchange(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::
                 DeleteDataExchangeRequest const& request) {
        return stub_->DeleteDataExchange(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnectionImpl::ListListings(
    google::cloud::bigquery::analyticshub::v1::ListListingsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListListings(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::analyticshub::v1::Listing>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_analyticshub_v1::AnalyticsHubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::analyticshub::v1::
                       ListListingsRequest const& request) {
              return stub->ListListings(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::analyticshub::v1::ListListingsResponse r) {
        std::vector<google::cloud::bigquery::analyticshub::v1::Listing> result(
            r.listings().size());
        auto& messages = *r.mutable_listings();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnectionImpl::GetListing(
    google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetListing(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
                 request) { return stub_->GetListing(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnectionImpl::CreateListing(
    google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateListing(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
              request) { return stub_->CreateListing(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnectionImpl::UpdateListing(
    google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateListing(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
              request) { return stub_->UpdateListing(context, request); },
      request, __func__);
}

Status AnalyticsHubServiceConnectionImpl::DeleteListing(
    google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteListing(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
              request) { return stub_->DeleteListing(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
AnalyticsHubServiceConnectionImpl::SubscribeListing(
    google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SubscribeListing(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::
                 SubscribeListingRequest const& request) {
        return stub_->SubscribeListing(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
AnalyticsHubServiceConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
AnalyticsHubServiceConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AnalyticsHubServiceConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google
