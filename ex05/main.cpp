#include <iostream>
#include "Harl.hpp"

int main(void){
    Harl harl;
    std::cout << "###>>  HARL  <<###" << std::endl;

    harl.complain("error");
    harl.complain("info");
    
    return (0);
}