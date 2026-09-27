#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <new>
# include <sstream>

class Zombie {
  public:
    Zombie(std::string name);
    Zombie(int n, std::string name);
    ~Zombie();
    std::string getName();
    void        announce();

  private:
    std::string _name;
};

Zombie* zombieHorde(int n, std::string name);

#endif