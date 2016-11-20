# tyk-protobuf-experiment

This is an experiment with [Protocol Buffers](https://developers.google.com/protocol-buffers/).

## Middleware

The `middleware` directory contains a simple C++ middleware. It implements several ways of exchanging [Protocol Buffers](https://developers.google.com/protocol-buffers/) messages between Go and C.

### Building the middleware library

Native middlewares get built as shared libraries. This sample requires [cmake](https://cmake.org/), the build instructions look like this:

```bash
cmake_minimum_required(VERSION 3.4)

find_package(Protobuf REQUIRED)

file(GLOB tyk_proto_bindings_sources
  "tyk/*.h"
  "tyk/*.cc"
)

file(GLOB middleware_sources
  "*.cpp"
)

# Link C++ bindings with Protobuf libraries:
add_library(tyk_proto_bindings ${tyk_proto_bindings_sources})
target_link_libraries(tyk_proto_bindings ${PROTOBUF_LIBRARIES})

# Link and build the middleware shared library:
add_library(middleware SHARED ${middleware_sources})
target_link_libraries(middleware tyk_proto_bindings)
```

You may use this CMake instructions as a starting point for your own builds. To build this middleware, run the following commands:

```
% cd middleware
% mkdir build ; cd build
% cmake ..
% make
```

The `make` output will look like this:
```
% make
Scanning dependencies of target tyk_proto_bindings
[ 12%] Building CXX object CMakeFiles/tyk_proto_bindings.dir/tyk/coprocess_common.pb.cc.o
[ 25%] Building CXX object CMakeFiles/tyk_proto_bindings.dir/tyk/coprocess_mini_request_object.pb.cc.o
[ 37%] Building CXX object CMakeFiles/tyk_proto_bindings.dir/tyk/coprocess_object.pb.cc.o
[ 50%] Building CXX object CMakeFiles/tyk_proto_bindings.dir/tyk/coprocess_return_overrides.pb.cc.o
[ 62%] Building CXX object CMakeFiles/tyk_proto_bindings.dir/tyk/coprocess_session_state.pb.cc.o
[ 75%] Linking CXX static library libtyk_proto_bindings.a
[ 75%] Built target tyk_proto_bindings
Scanning dependencies of target middleware
[ 87%] Building CXX object CMakeFiles/middleware.dir/middleware.cpp.o
[100%] Linking CXX shared library libmiddleware.dylib
[100%] Built target middleware
```

The final output is `libmiddleware.so` (or `libmiddleware.dylib` for OSX/Darwin). This is the file that our Go program will load.

## License

[MIT](LICENSE.md)
