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
// source: google/cloud/compute/networks/v1/networks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_H

#include "google/cloud/compute/networks/v1/internal/networks_retry_traits.h"
#include "google/cloud/compute/networks/v1/networks_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/networks/v1/networks.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_networks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NetworksConnection`.
class NetworksRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NetworksRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NetworksConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworksLimitedErrorCountRetryPolicy : public NetworksRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NetworksLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  NetworksLimitedErrorCountRetryPolicy(
      NetworksLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NetworksLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  NetworksLimitedErrorCountRetryPolicy(
      NetworksLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NetworksLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetworksRetryPolicy> clone() const override {
    return std::make_unique<NetworksLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworksRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_networks_v1_internal::NetworksRetryTraits>
      impl_;
};

/**
 * A retry policy for `NetworksConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworksLimitedTimeRetryPolicy : public NetworksRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit NetworksLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NetworksLimitedTimeRetryPolicy(NetworksLimitedTimeRetryPolicy&& rhs) noexcept
      : NetworksLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NetworksLimitedTimeRetryPolicy(
      NetworksLimitedTimeRetryPolicy const& rhs) noexcept
      : NetworksLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetworksRetryPolicy> clone() const override {
    return std::make_unique<NetworksLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworksRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_networks_v1_internal::NetworksRetryTraits>
      impl_;
};

/**
 * The `NetworksConnection` object for `NetworksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetworksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NetworksClient`.
 *
 * To create a concrete instance, see `MakeNetworksConnection()`.
 *
 * For mocking, see `compute_networks_v1_mocks::MockNetworksConnection`.
 */
class NetworksConnection {
 public:
  virtual ~NetworksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddPeering(google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
                 request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetwork(
      google::cloud::cpp::compute::networks::v1::DeleteNetworkRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Network> GetNetwork(
      google::cloud::cpp::compute::networks::v1::GetNetworkRequest const&
          request);

  virtual StatusOr<
      google::cloud::cpp::compute::v1::NetworksGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(google::cloud::cpp::compute::networks::v1::
                            GetEffectiveFirewallsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetwork(
      google::cloud::cpp::compute::networks::v1::InsertNetworkRequest const&
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Network> ListNetworks(
      google::cloud::cpp::compute::networks::v1::ListNetworksRequest request);

  virtual StreamRange<google::cloud::cpp::compute::v1::ExchangedPeeringRoute>
  ListPeeringRoutes(
      google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetwork(
      google::cloud::cpp::compute::networks::v1::PatchNetworkRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemovePeering(
      google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SwitchToCustomMode(google::cloud::cpp::compute::networks::v1::
                         SwitchToCustomModeRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePeering(
      google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_H
