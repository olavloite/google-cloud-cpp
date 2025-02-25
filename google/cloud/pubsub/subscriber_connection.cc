// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/pubsub/subscriber_connection.h"
#include "google/cloud/pubsub/internal/create_channel.h"
#include "google/cloud/pubsub/internal/defaults.h"
#include "google/cloud/pubsub/internal/subscriber_auth_decorator.h"
#include "google/cloud/pubsub/internal/subscriber_connection_impl.h"
#include "google/cloud/pubsub/internal/subscriber_logging_decorator.h"
#include "google/cloud/pubsub/internal/subscriber_metadata_decorator.h"
#include "google/cloud/pubsub/internal/subscriber_round_robin_decorator.h"
#include "google/cloud/pubsub/internal/subscriber_stub_factory.h"
#include "google/cloud/pubsub/options.h"
#include "google/cloud/pubsub/retry_policy.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/make_status.h"
#include "google/cloud/internal/random.h"
#include "google/cloud/log.h"
#include <algorithm>
#include <memory>

namespace google {
namespace cloud {
namespace pubsub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::shared_ptr<pubsub_internal::SubscriberStub> DecorateSubscriberStub(
    Options const& opts,
    std::shared_ptr<internal::GrpcAuthenticationStrategy> auth,
    std::vector<std::shared_ptr<pubsub_internal::SubscriberStub>> children) {
  std::shared_ptr<pubsub_internal::SubscriberStub> stub =
      std::make_shared<pubsub_internal::SubscriberRoundRobin>(
          std::move(children));
  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<pubsub_internal::SubscriberAuth>(std::move(auth),
                                                             std::move(stub));
  }
  stub = std::make_shared<pubsub_internal::SubscriberMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{},
      internal::HandCraftedLibClientHeader());
  auto const& tracing = opts.get<TracingComponentsOption>();
  if (internal::Contains(tracing, "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<pubsub_internal::SubscriberLogging>(
        std::move(stub), opts.get<GrpcTracingOptionsOption>(), tracing);
  }
  return stub;
}

}  // namespace

SubscriberConnection::~SubscriberConnection() = default;

// NOLINTNEXTLINE(performance-unnecessary-value-param)
future<Status> SubscriberConnection::Subscribe(SubscribeParams) {
  return make_ready_future(
      internal::UnimplementedError("needs-override", GCP_ERROR_INFO()));
}

future<Status> SubscriberConnection::ExactlyOnceSubscribe(
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    ExactlyOnceSubscribeParams) {
  return make_ready_future(
      internal::UnimplementedError("needs-override", GCP_ERROR_INFO()));
}

StatusOr<pubsub::PullResponse> SubscriberConnection::Pull() {
  return internal::UnimplementedError("needs-override", GCP_ERROR_INFO());
}

std::shared_ptr<SubscriberConnection> MakeSubscriberConnection(
    Subscription subscription,
    std::initializer_list<internal::NonConstructible>) {
  return MakeSubscriberConnection(std::move(subscription));
}

std::shared_ptr<SubscriberConnection> MakeSubscriberConnection(
    Subscription subscription, Options opts) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList, PolicyOptionList,
                                 SubscriberOptionList>(opts, __func__);
  opts = internal::MergeOptions(
      std::move(opts),
      Options{}.set<SubscriptionOption>(std::move(subscription)));
  opts = pubsub_internal::DefaultSubscriberOptions(std::move(opts));
  auto background = internal::MakeBackgroundThreadsFactory(opts)();
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      background->cq(), opts);
  std::vector<std::shared_ptr<pubsub_internal::SubscriberStub>> children(
      opts.get<GrpcNumChannelsOption>());
  int id = 0;
  std::generate(children.begin(), children.end(), [&id, &opts, &auth] {
    return pubsub_internal::CreateDefaultSubscriberStub(
        auth->CreateChannel(opts.get<EndpointOption>(),
                            pubsub_internal::MakeChannelArguments(opts, id++)));
  });
  auto stub =
      DecorateSubscriberStub(opts, std::move(auth), std::move(children));
  return std::make_shared<pubsub_internal::SubscriberConnectionImpl>(
      std::move(opts), std::move(stub));
}

std::shared_ptr<SubscriberConnection> MakeSubscriberConnection(
    Subscription subscription, SubscriberOptions options,
    ConnectionOptions connection_options,
    std::unique_ptr<pubsub::RetryPolicy const> retry_policy,
    std::unique_ptr<pubsub::BackoffPolicy const> backoff_policy) {
  auto opts = internal::MergeOptions(
      pubsub_internal::MakeOptions(std::move(options)),
      internal::MakeOptions(std::move(connection_options)));
  if (retry_policy) opts.set<RetryPolicyOption>(retry_policy->clone());
  if (backoff_policy) opts.set<BackoffPolicyOption>(backoff_policy->clone());
  return MakeSubscriberConnection(std::move(subscription), std::move(opts));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub

namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<pubsub::SubscriberConnection> MakeTestSubscriberConnection(
    pubsub::Subscription subscription, Options opts,
    std::vector<std::shared_ptr<SubscriberStub>> stubs) {
  auto background = internal::MakeBackgroundThreadsFactory(opts)();
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      background->cq(), opts);
  auto stub =
      pubsub::DecorateSubscriberStub(opts, std::move(auth), std::move(stubs));
  opts.set<pubsub::SubscriptionOption>(std::move(subscription));
  return std::make_shared<SubscriberConnectionImpl>(std::move(opts),
                                                    std::move(stub));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
