#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

// Now, create two classes: HumanA and HumanB. They both have a Weapon and a
// name. They also have a member function attack() that displays (of course,
// without the angle brackets): <name> attacks with their <weapon type> HumanA
// and HumanB are almost the same except for these two tiny details: • While
// HumanA takes the Weapon in its constructor, HumanB doesn’t. • HumanB may not
// always have a Weapon, whereas HumanA will always be armed.

#include <string>

#include "Weapon.hpp"

class HumanB {
public:
  HumanB(std::string);

  void attack() const;
  void setWeapon(Weapon &weapon);

private:
  std::string _name;
  Weapon *_weapon;
};

#endif
