#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
  this->_name = name;
  std::cout << getName() << " created!" << std::endl;
}

Zombie::Zombie(int n, std::string name) {
  std::string n_str;
  std::stringstream ss;

  ss << n;
  n_str = ss.str();
  this->_name = name + " #" + n_str;
  std::cout << getName() << " created!" << std::endl;
}

Zombie::~Zombie() {
  std::cout << getName() << " destroyed!" << std::endl;
}

std::string Zombie::getName() { return _name; }

void  Zombie::announce() {
  std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
