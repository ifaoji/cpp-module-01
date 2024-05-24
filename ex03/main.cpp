#include <iostream>

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
  {
    std::cout << "------- HumanA (Hubert) attacking" << std::endl;

    Weapon club = Weapon("crude spiked club");
    HumanA hubert("Hubert", club);
    hubert.attack();
    club.setType("some other type of club");
    hubert.attack();
  }

  {
    std::cout << "------- HumanB (Norbert) attacking with weapon" << std::endl;

    Weapon club = Weapon("crude spiked club");
    HumanB norbert("Norbert");
    norbert.setWeapon(club);
    norbert.attack();
    club.setType("some other type of club");
    norbert.attack();
  }

  {
    std::cout << "------- HumanB (Albert) attacking without weapon"
              << std::endl;

    HumanB albert("Albert");
    albert.attack();
    std::cout << "HumanB (Albert) now has a weapon" << std::endl;
    Weapon club = Weapon("crude spiked club");
    albert.setWeapon(club);
    albert.attack();
  }
}
