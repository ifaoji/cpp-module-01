#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void HumanB::attack() const {
  if (this->_weapon == NULL) {
    std::cout << this->_name << " tried to attack, but they don't have a weapon"
              << std::endl;

    return;
  }

  std::cout << this->_name << " attacks with their " << this->_weapon->getType()
            << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }
