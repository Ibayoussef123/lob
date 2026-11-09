cmake_minimum_required(VERSION 3.22)
project(lob VERSION 0.1.0 LANGUAGES CXX)

option(LOB_BUILD_TESTS "Build unit tests" ON)

# Warning flags, applied only to our own targets (never to third-party code)
add_library(lob_warnings INTERFACE)
target_compile_options(lob_warnings INTERFACE
  -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wsign-conversion -Werror)

add_subdirectory(src)

if(LOB_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()