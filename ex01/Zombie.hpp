#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>
#include <sstream>

class Zombie
{
private:
  std::string _name;
  int _index;

public:
  Zombie();
  Zombie(std::string name, int i);
  ~Zombie();

  int getIndex();
  void announce(void);
  void setName(std::string name);
  void setIndex(int i);
};

Zombie *zombieHorde(int N, std::string name);

#endif