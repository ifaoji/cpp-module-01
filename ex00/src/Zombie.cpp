#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
  std::cout << this->name << ": Was burned by the sun" << std::endl;
}

void Zombie::announce() const {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
