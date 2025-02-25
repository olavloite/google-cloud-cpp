// Copyright 2023 Google LLC
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

#include "google/cloud/internal/call_context.h"
#include "google/cloud/internal/opentelemetry.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

struct IntOption {
  using Type = int;
};

TEST(CallContext, Options) {
  EXPECT_FALSE(CallContext().options->has<IntOption>());
  {
    OptionsSpan span(Options{}.set<IntOption>(1));
    auto context = CallContext();
    ScopedCallContext scope(context);
    EXPECT_EQ(CallContext().options->get<IntOption>(), 1);
    {
      OptionsSpan span2(Options{}.set<IntOption>(2));
      auto context = CallContext();
      ScopedCallContext scope(context);
      EXPECT_EQ(CallContext().options->get<IntOption>(), 2);
    }
    EXPECT_EQ(CallContext().options->get<IntOption>(), 1);
  }
  EXPECT_FALSE(CallContext().options->has<IntOption>());
}

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TEST(CallContext, Span) {
  auto s1 = MakeSpan("s1");
  auto s2 = MakeSpan("s2");

  EXPECT_FALSE(CallContext().span->GetContext().IsValid());
  {
    auto context = CallContext();
    context.span = s1;
    ScopedCallContext scope(context);
    EXPECT_EQ(CallContext().span, s1);
    {
      auto context = CallContext();
      context.span = s2;
      ScopedCallContext scope(context);
      EXPECT_EQ(CallContext().span, s2);
    }
    EXPECT_EQ(CallContext().span, s1);
  }
  EXPECT_FALSE(CallContext().span->GetContext().IsValid());
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
