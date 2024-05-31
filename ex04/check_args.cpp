#include <iostream>

#include "main.hpp"

t_error check_args(int argc, char **argv, t_args &args) {
  if (argc != 4) {
    std::cout << "Usage: " << argv[0] << " <filename> <search> <replace>"
              << std::endl;

    return ERROR_ARGS;
  }

  args.file = argv[1];
  args.search = argv[2];
  args.replace = argv[3];

  return SUCCESS;
}
