#include "Chunk.hpp"
# include <string>
# include <iostream>

Chunk::Chunk() : _input(""), _output("") {}
Chunk::~Chunk() {}

std::string Chunk::getInput() { return _input; }

void Chunk::setInput(std::string line){
  _input = line;
}

std::string Chunk::getOutput() { return _output; }

void Chunk::setOutput(std::string target, std::string newStr){
  (void)newStr;
  if(_input.find(target) != std::string::npos){

    std::cout << "\nHAS IT!" << std::endl;
  } else{
    _output = _input;
  }
}
