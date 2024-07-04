#include <iostream>

#include "Harl.hpp"

int main() {
  Harl harl;

  std::cout << "Debug Harl:" << std::endl;
  harl.complain("debug");
  std::cout << std::endl;

  std::cout << "Info Harl:" << std::endl;
  harl.complain("info");
  std::cout << std::endl;

  std::cout << "Warning Harl:" << std::endl;
  harl.complain("warning");
  std::cout << std::endl;

  std::cout << "Error Harl:" << std::endl;
  harl.complain("error");
  std::cout << std::endl;

  std::cout << "Invalid Harl" << std::endl;
  harl.complain("invalid");
}
