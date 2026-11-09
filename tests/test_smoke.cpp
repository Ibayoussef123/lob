#include <gtest/gtest.h>

#include <string>

#include "lob/version.hpp"

TEST(Smoke, VersionIsSet) { EXPECT_EQ(std::string(lob::version()), "0.1.0"); }
