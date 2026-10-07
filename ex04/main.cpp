#include <string>
#include <iostream>
#include <fstream>
#include "Chunk.hpp"

int main(int ac, char **av){
  if(ac != 4){
    std::cout
      << "Inform param1 [input file name], param2 [string to change] and param3 [substitute string]."
      << std::endl;
    return (1);
  }

  std::ifstream readFile;
  std::ofstream writeFile;
  std::string line;
  Chunk chunk;

  readFile.open(av[1]);
  writeFile.open("./output.replace");

  while(std::getline(readFile, line)){
    chunk.setInput(line);
    chunk.setOutput(av[2], av[3]);
    std::cout << chunk.getOutput() << std::endl;
    writeFile << chunk.getOutput() << std::endl;
  }

  readFile.close();
  writeFile.close();

  return (0);
}