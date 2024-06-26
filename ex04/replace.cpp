#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string replace(std::ifstream &input_file, std::string search,
                    std::string replace) {

  std::stringstream buffer;
  buffer << input_file.rdbuf();
  std::string str = buffer.str();

  for (size_t pos = str.find(search); pos != std::string::npos;
       pos = str.find(search, pos + replace.length())) {
    str.erase(pos, search.length());
    str.insert(pos, replace);
  }

  return str;
}
