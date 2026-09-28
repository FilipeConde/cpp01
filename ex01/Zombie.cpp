#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name, int i)
{
  this->_name = name;
  this->_index = i;
}

Zombie::~Zombie()
{
  std::cout << this->_name + " destroyed!" << std::endl;
}

int Zombie::getIndex()
{
  return (_index);
}

void Zombie::announce()
{
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
  this->_name = name;
}

void Zombie::setIndex(int i)
{
  this->_index = i;
}