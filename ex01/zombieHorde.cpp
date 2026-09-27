#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name){
  Zombie  *z;
  z = new Zombie(n, name);
  return (z);
}