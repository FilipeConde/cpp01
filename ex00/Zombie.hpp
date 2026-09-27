#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
  public:
    Zombie(std::string name);
    ~Zombie();
    std::string getName();
    void  announce();

  private:
    std::string _name;
};

#endif