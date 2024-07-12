#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv) {
  const int LEVELS_LENGTH = 4;
  static std::string levels[LEVELS_LENGTH] = {"DEBUG", "INFO", "WARNING",
                                              "ERROR"};

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <log_level>" << std::endl;
    return 1;
  }

  int level = 0;
  while (level < LEVELS_LENGTH) {
    if (levels[level] == argv[1])
      break;

    level += 1;
  }

  Harl harl;

  switch (level) {
  case 0:
    harl.complain("DEBUG");
    std::cout << std::endl;
  case 1:
    harl.complain("INFO");
    std::cout << std::endl;
  case 2:
    harl.complain("WARNING");
    std::cout << std::endl;
  case 3:
    harl.complain("ERROR");
    break;
  default:
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
  }
}
