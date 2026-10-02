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
  int targetLen = target.length();
  int pos = 0;
  
  while(((pos = _input.find(target)) != std::string::npos)){
    for(int i = 0; i < pos; i++){
      std::cout << _input[i];
    }
  }
  if(_input.find(target) != std::string::npos){

    std::cout << "\nHAS IT!" << std::endl;
  } else{
    _output = _input;
  }
}

/*
  - set target length and replacement length;
  - find target starting pos;
  - print previous part;
  - print replacement;
  - update string pos to after target;
  - keep finding target;
*/