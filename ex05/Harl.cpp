#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::complain(std::string level){
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void (Harl::*functions[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for(int i = 0; i < 4; i++){
        if(levels[i] == level){
            (this->*functions[i])();
            return;
        }
    }

}

void Harl::debug( void ){
    std::cout << "DEBUG message" << std::endl;
}
void Harl::info( void ){
    std::cout << "INFO message" << std::endl;
}
void Harl::warning( void ){
    std::cout << "WARN message" << std::endl;
}
void Harl::error( void ){
    std::cout << "ERRPR message" << std::endl;
}