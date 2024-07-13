#include <iostream>

#include "Zombie.hpp"

int main() {
  std::cout << "Main Simple Test" << std::endl;
  {
    Zombie zom("Hubert");
    zom.announce();
  }

  std::cout << std::endl << "newZombie / Heap Test" << std::endl;
  {
    Zombie *zom = newZombie("Bernhart");
    zom->announce();
    delete zom;
  }

  std::cout << std::endl << "randomChump / Stack Test" << std::endl;
  { randomChump("Chunky"); }
}
