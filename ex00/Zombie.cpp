#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
  this->_name = name;
}

Zombie::~Zombie() {
  std::cout << getName() << " destroyed!" << std::endl;
}

std::string Zombie::getName() { return _name; }

void  Zombie::announce() {
  std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
