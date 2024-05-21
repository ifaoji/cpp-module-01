#include "Zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"

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
