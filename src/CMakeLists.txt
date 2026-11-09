add_library(lob version.cpp)
add_library(lob::lob ALIAS lob)

target_include_directories(lob PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(lob PUBLIC cxx_std_20)
target_link_libraries(lob PRIVATE lob_warnings)
