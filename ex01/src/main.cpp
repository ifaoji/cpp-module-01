#include <iostream>

#include "Zombie.hpp"

void testHorde(std::string test_name, int n, std::string name) {
  std::cout << "---------- " << test_name << std::endl;

  Zombie *horde = zombieHorde(n, name);
  if (horde == NULL) {
    std::cout << "HORDE WAS NOT SPAWNED" << std::endl;
    return;
  }

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ": ";
    horde[i].announce();
  }

  delete[] horde;
}

int main() {
  testHorde("negative", -1, "Bernie");
  testHorde("zero", 0, "Bernie");

  testHorde("single", 1, "Hubert");
  testHorde("10", 10, "Albert");
  testHorde("20", 20, "Gilbert");
  testHorde("100", 100, "Norbert");
}
