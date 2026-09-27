#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {}

std::string Zombie::getName() { return _name; }

void  Zombie::announce() {
  std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
