#include "Zombie.hpp"

int main() {
  {
    Zombie zom("Hubert");
    zom.announce();
  }

  {
    Zombie *zom = newZombie("Bernhart");
    zom->announce();
    delete zom;
  }

  { randomChump("Chunky"); }
}
