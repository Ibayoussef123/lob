include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.15.2
)
# Keep gtest from overriding our compiler/linker settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(lob_tests test_smoke.cpp)
target_link_libraries(lob_tests PRIVATE lob::lob lob_warnings GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(lob_tests)
