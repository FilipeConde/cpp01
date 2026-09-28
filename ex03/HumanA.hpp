#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA{
    public:
        HumanA();
        HumanA(std::string name, const Weapon &weapon);
        ~HumanA();
        void atack();

    private:
    Weapon _weapon;
    std::string _name;
};

#endif