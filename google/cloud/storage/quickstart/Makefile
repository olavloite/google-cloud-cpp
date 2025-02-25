# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This is a minimal Makefile to show how to use the Google Cloud Storage C++
# client for developers who use make(1) as their build system.

# The CXX, CXXFLAGS and CXXLD variables are hard-coded. These values work for
# our tests, but applications would typically make them configurable parameters.
CXX=g++
CXXFLAGS=
CXXLD=$(CXX)
BIN=.

all: $(BIN)/quickstart

# Configuration variables to compile and link against the Google Cloud Storage
# C++ client library.
GCS_DEPS := google_cloud_cpp_storage
GCS_CXXFLAGS   := $(shell pkg-config $(GCS_DEPS) --cflags)
GCS_CXXLDFLAGS := $(shell pkg-config $(GCS_DEPS) --libs-only-L)
GCS_LIBS       := $(shell pkg-config $(GCS_DEPS) --libs-only-l)

# A target using the Google Cloud Storage C++ client library.
$(BIN)/quickstart: quickstart.cc
	$(CXXLD) $(CXXFLAGS) $(GCS_CXXFLAGS) $(GCS_CXXLDFLAGS) -o $@ $^ $(GCS_LIBS)

GCS_GRPC_DEPS := google_cloud_cpp_storage_grpc
GCS_GRPC_CXXFLAGS   := $(shell pkg-config $(GCS_GRPC_DEPS) --cflags)
GCS_GRPC_CXXLDFLAGS := $(shell pkg-config $(GCS_GRPC_DEPS) --libs-only-L)
GCS_GRPC_LIBS       := $(shell pkg-config $(GCS_GRPC_DEPS) --libs-only-l)

$(BIN)/quickstart_grpc: quickstart_grpc.cc
	$(CXXLD) $(CXXFLAGS) $(GCS_GRPC_CXXFLAGS) $(GCS_GRPC_CXXLDFLAGS) -o $@ $^ $(GCS_GRPC_LIBS)
