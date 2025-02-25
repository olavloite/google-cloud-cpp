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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConsumerProcurementServiceTracingConnection::
    ConsumerProcurementServiceTracingConnection(
        std::shared_ptr<commerce_consumer_procurement_v1::
                            ConsumerProcurementServiceConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
ConsumerProcurementServiceTracingConnection::PlaceOrder(
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  auto span = internal::MakeSpan(
      "commerce_consumer_procurement_v1::ConsumerProcurementServiceConnection::"
      "PlaceOrder");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PlaceOrder(request));
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceTracingConnection::GetOrder(
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  auto span = internal::MakeSpan(
      "commerce_consumer_procurement_v1::ConsumerProcurementServiceConnection::"
      "GetOrder");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOrder(request));
}

StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceTracingConnection::ListOrders(
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest
        request) {
  auto span = internal::MakeSpan(
      "commerce_consumer_procurement_v1::ConsumerProcurementServiceConnection::"
      "ListOrders");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListOrders(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::commerce::consumer::procurement::v1::Order>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    commerce_consumer_procurement_v1::ConsumerProcurementServiceConnection>
MakeConsumerProcurementServiceTracingConnection(
    std::shared_ptr<
        commerce_consumer_procurement_v1::ConsumerProcurementServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ConsumerProcurementServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
