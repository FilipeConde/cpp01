#include <string>
#include <iostream>
#include <fstream>
#include "Chunk.hpp"

int main(int ac, char **av){
  // 
  // [x] receive three parameters (filename, str1 and str2);
  // [x] open file
  // [x] find occurrence of string in line;
  // [x] copy content for <new_file>;
  // [ ] create class for chunks;
  // [ ] replace replacing str1 by str2;
  // [ ] mustn't use std::string::replace nor C file manipulations functions;
  // [ ] Deal with errors;
  // 
  (void)av;
  if(ac != 4){
    std::cout
      << "Inform param1 [input file name], param2 [string to change] and param3 [substitute string]."
      << std::endl;
    return (1);
  }

  std::ifstream readFile;
  std::ofstream writeFile;
  std::string line;

  readFile.open(av[1]);
  writeFile.open("./output.replace");

  while(std::getline(readFile, line)){
    if(line.find(av[2]) != std::string::npos)
    {
      std::cout << "\nHAS IT!" << std::endl;
    }
    std::cout << line << std::endl;
    writeFile << line << std::endl;
  }

  readFile.close();
  writeFile.close();

  return (0);
}