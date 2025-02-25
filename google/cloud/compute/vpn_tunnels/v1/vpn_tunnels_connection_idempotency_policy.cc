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
// source: google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto

#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_tunnels_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

VpnTunnelsConnectionIdempotencyPolicy::
    ~VpnTunnelsConnectionIdempotencyPolicy() = default;

std::unique_ptr<VpnTunnelsConnectionIdempotencyPolicy>
VpnTunnelsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<VpnTunnelsConnectionIdempotencyPolicy>(*this);
}

Idempotency VpnTunnelsConnectionIdempotencyPolicy::AggregatedListVpnTunnels(
    google::cloud::cpp::compute::vpn_tunnels::v1::
        AggregatedListVpnTunnelsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VpnTunnelsConnectionIdempotencyPolicy::DeleteVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::
        DeleteVpnTunnelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VpnTunnelsConnectionIdempotencyPolicy::GetVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VpnTunnelsConnectionIdempotencyPolicy::InsertVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::
        InsertVpnTunnelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VpnTunnelsConnectionIdempotencyPolicy::ListVpnTunnels(
    google::cloud::cpp::compute::vpn_tunnels::v1::
        ListVpnTunnelsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VpnTunnelsConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<VpnTunnelsConnectionIdempotencyPolicy>
MakeDefaultVpnTunnelsConnectionIdempotencyPolicy() {
  return std::make_unique<VpnTunnelsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_tunnels_v1
}  // namespace cloud
}  // namespace google
