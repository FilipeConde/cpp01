#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->_type = type;
}

Weapon::~Weapon(){};

std::string Weapon::getType(){
    return (_type);
}

void Weapon::setType(const std::string &type){
    _type = type;
}
