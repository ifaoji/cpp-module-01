#pragma once

#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

typedef enum {
  SUCCESS = 0,
  ERROR_ARGS = 1,
  ERROR_OPEN_FILE,
} t_error;

typedef struct {
  std::string file;
  std::string search;
  std::string replace;
} t_args;

t_error check_args(int argc, char **argv, t_args &args);

#endif
