# Migration Center API C++ Client Library

This directory contains an idiomatic C++ client library for the
[Migration Center API][cloud-service-docs]. Migration Center is a unified
platform that helps you accelerate your end-to-end cloud journey from your
current on-premises or cloud environments to Google Cloud.

While this library is **GA**, please note that the Google Cloud C++ client
libraries do **not** follow [Semantic Versioning](https://semver.org/).

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/migrationcenter/v1/migration_center_client.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " project-id location-id\n";
    return 1;
  }

  namespace migrationcenter = ::google::cloud::migrationcenter_v1;
  auto client = migrationcenter::MigrationCenterClient(
      migrationcenter::MakeMigrationCenterConnection());

  auto const parent =
      std::string{"projects/"} + argv[1] + "/locations/" + argv[2];
  for (auto r : client.ListAssets(parent)) {
    if (!r) throw std::move(r).status();
    std::cout << r->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
```

<!-- inject-quickstart-end -->

## More Information

- Official documentation about the [Migration Center API][cloud-service-docs]
  service
- [Reference doxygen documentation][doxygen-link] for each release of this
  client library
- Detailed header comments in our [public `.h`][source-link] files

[cloud-service-docs]: https://cloud.google.com/migration-center
[doxygen-link]: https://cloud.google.com/cpp/docs/reference/migrationcenter/latest/
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/migrationcenter
