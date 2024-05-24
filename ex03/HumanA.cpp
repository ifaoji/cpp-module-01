#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {}

void HumanA::attack() const {
  std::cout << this->_name << " attacks with their " << this->_weapon.getType()
            << std::endl;
}
