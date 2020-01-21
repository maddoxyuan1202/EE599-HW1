#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(NameShould, ReturnName) {
  Solution solution;
  std::string actual = solution.PrintName();
  std::string expected = "**** Weiheng Yuan ****";
  EXPECT_EQ(expected, actual);
}