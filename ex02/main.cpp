#include <iostream>
#include <string>

int main(void){
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "address String:     " << &string << std::endl;
    std::cout << "address String PTR: " << stringPTR << std::endl;
    std::cout << "address String REF: " << &stringREF << std::endl;

    std::cout << "value String:     " << string << std::endl;
    std::cout << "value String PTR: " << *stringPTR << std::endl;
    std::cout << "value String REF: " << stringREF << std::endl;

    return (0);
}