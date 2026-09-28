#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(){};
HumanA::HumanA(std::string name, const Weapon &weapon){
    _name = name;
    _weapon = weapon;
};

void HumanA::atack(){
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
