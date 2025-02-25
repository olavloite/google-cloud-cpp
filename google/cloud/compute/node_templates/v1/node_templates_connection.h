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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_NODE_TEMPLATES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_NODE_TEMPLATES_CONNECTION_H

#include "google/cloud/compute/node_templates/v1/internal/node_templates_retry_traits.h"
#include "google/cloud/compute/node_templates/v1/node_templates_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_templates/v1/node_templates.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NodeTemplatesConnection`.
class NodeTemplatesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NodeTemplatesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NodeTemplatesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NodeTemplatesLimitedErrorCountRetryPolicy
    : public NodeTemplatesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NodeTemplatesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  NodeTemplatesLimitedErrorCountRetryPolicy(
      NodeTemplatesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NodeTemplatesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  NodeTemplatesLimitedErrorCountRetryPolicy(
      NodeTemplatesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NodeTemplatesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NodeTemplatesRetryPolicy> clone() const override {
    return std::make_unique<NodeTemplatesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NodeTemplatesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_node_templates_v1_internal::NodeTemplatesRetryTraits>
      impl_;
};

/**
 * A retry policy for `NodeTemplatesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NodeTemplatesLimitedTimeRetryPolicy : public NodeTemplatesRetryPolicy {
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
  explicit NodeTemplatesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NodeTemplatesLimitedTimeRetryPolicy(
      NodeTemplatesLimitedTimeRetryPolicy&& rhs) noexcept
      : NodeTemplatesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NodeTemplatesLimitedTimeRetryPolicy(
      NodeTemplatesLimitedTimeRetryPolicy const& rhs) noexcept
      : NodeTemplatesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<NodeTemplatesRetryPolicy> clone() const override {
    return std::make_unique<NodeTemplatesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NodeTemplatesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_node_templates_v1_internal::NodeTemplatesRetryTraits>
      impl_;
};

/**
 * The `NodeTemplatesConnection` object for `NodeTemplatesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NodeTemplatesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NodeTemplatesClient`.
 *
 * To create a concrete instance, see `MakeNodeTemplatesConnection()`.
 *
 * For mocking, see
 * `compute_node_templates_v1_mocks::MockNodeTemplatesConnection`.
 */
class NodeTemplatesConnection {
 public:
  virtual ~NodeTemplatesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeTemplateAggregatedList>
  AggregatedListNodeTemplates(
      google::cloud::cpp::compute::node_templates::v1::
          AggregatedListNodeTemplatesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodeTemplate(google::cloud::cpp::compute::node_templates::v1::
                         DeleteNodeTemplateRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
  GetNodeTemplate(google::cloud::cpp::compute::node_templates::v1::
                      GetNodeTemplateRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::node_templates::v1::
          GetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNodeTemplate(google::cloud::cpp::compute::node_templates::v1::
                         InsertNodeTemplateRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>
  ListNodeTemplates(
      google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::node_templates::v1::
          SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_templates::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_NODE_TEMPLATES_CONNECTION_H
