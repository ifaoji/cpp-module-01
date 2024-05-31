#include "main.hpp"
#include "gtest/gtest.h"

TEST(ArgParsing, NoArgs) {
  std::string name = "./sifl";
  char **argv = new char *[2];
  argv[0] = (char *)name.c_str();
  argv[1] = NULL;

  t_args args;

  EXPECT_EQ(check_args(1, argv, args), ERROR_ARGS);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
