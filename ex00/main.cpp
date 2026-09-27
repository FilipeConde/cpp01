#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

int main(int ac, char **av)
{
    (void)av;

    if (ac > 1)
    {
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    Zombie *firstZombie;
    firstZombie = newZombie("Fred");
    firstZombie->announce();
    randomChump("Frau");
    delete firstZombie;

    return (EXIT_SUCCESS);
}
