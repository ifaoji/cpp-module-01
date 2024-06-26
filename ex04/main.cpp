#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "main.hpp"

// Create a program that takes three parameters in the following order: a
// filename and two strings, s1 and s2.

// It will open the file <filename> and copies its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.

// Using C file manipulation functions is forbidden and will be considered
// cheating. All the member functions of the class std::string are allowed,
// except replace. Use them wisely!

// Of course, handle unexpected inputs and errors. You have to create and turn
// in your own tests to ensure your program works as expected.

int main(int argc, char **argv) {
  t_args args;

  t_error error = check_args(argc, argv, args);
  if (error != SUCCESS)
    return (error);

  std::ifstream ifile(args.file.c_str());
  if (ifile.fail()) {
    perror("Failed to open input file");

    return ERROR_OPEN_FILE;
  }

  std::string result = replace(ifile, args.search, args.replace);

  std::ofstream file((args.file + ".replace").c_str());
  if (file.fail()) {
    perror("Failed to open file");

    return ERROR_OPEN_FILE;
  }
  file << result;

  file.close();
}
