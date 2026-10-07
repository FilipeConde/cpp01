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

void Chunk::setOutput(const std::string &target, const std::string &newStr){
  if(target.empty()){
    _output = _input;
    return;
  }

  std::string result = "";
  int targetLen = target.length();
  size_t start = 0;
  size_t pos = _input.find(target, start);
  
  while(pos != std::string::npos){
    result += _input.substr(start, pos - start);
    result += newStr;
    start = pos + targetLen;
    pos = _input.find(target, start);
  }
  result += _input.substr(start);
  _output = result;
}
