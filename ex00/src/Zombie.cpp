#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce() const {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
