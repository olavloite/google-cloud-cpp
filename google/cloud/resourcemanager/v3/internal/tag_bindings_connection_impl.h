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
// source: google/cloud/resourcemanager/v3/tag_bindings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_BINDINGS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_BINDINGS_CONNECTION_IMPL_H

#include "google/cloud/resourcemanager/v3/internal/tag_bindings_retry_traits.h"
#include "google/cloud/resourcemanager/v3/internal/tag_bindings_stub.h"
#include "google/cloud/resourcemanager/v3/tag_bindings_connection.h"
#include "google/cloud/resourcemanager/v3/tag_bindings_connection_idempotency_policy.h"
#include "google/cloud/resourcemanager/v3/tag_bindings_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TagBindingsConnectionImpl
    : public resourcemanager_v3::TagBindingsConnection {
 public:
  ~TagBindingsConnectionImpl() override = default;

  TagBindingsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcemanager_v3_internal::TagBindingsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::resourcemanager::v3::TagBinding> ListTagBindings(
      google::cloud::resourcemanager::v3::ListTagBindingsRequest request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagBinding>>
  CreateTagBinding(
      google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>>
  DeleteTagBinding(
      google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
          request) override;

  StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>
  ListEffectiveTags(google::cloud::resourcemanager::v3::ListEffectiveTagsRequest
                        request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<resourcemanager_v3_internal::TagBindingsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_BINDINGS_CONNECTION_IMPL_H
