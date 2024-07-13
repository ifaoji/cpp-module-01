#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

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
