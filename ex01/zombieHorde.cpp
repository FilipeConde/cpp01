#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
  Zombie *horde;
  std::stringstream ss;
  std::string i_str;

  horde = new Zombie[N];

  for (int i = 0; i < N; i++)
  {
    ss << i;
    i_str = ss.str();
    horde[i].setName(name + " #" + i_str);
    horde[i].setIndex(i);
    ss.clear();
    ss.str("");
  }
  return (horde);
}