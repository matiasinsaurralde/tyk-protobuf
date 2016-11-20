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
add_library(tyk_proto_bindings OBJECT ${tyk_proto_bindings_sources})
# add_library(tyk_proto_bindings ${tyk_proto_bindings_sources})
# target_link_libraries(tyk_proto_bindings ${PROTOBUF_LIBRARIES})

# Link and build the middleware shared library:
# add_library(middleware SHARED ${middleware_sources})
add_library(middleware_lib OBJECT ${middleware_sources})
# target_link_libraries(middleware_lib tyk_proto_bindings)

# Static stuff:
add_library(middleware SHARED $<TARGET_OBJECTS:tyk_proto_bindings> $<TARGET_OBJECTS:middleware_lib>)
target_link_libraries(middleware ${PROTOBUF_LIBRARIES})
