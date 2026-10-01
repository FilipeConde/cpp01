#include <string>
#include <iostream>

int main(int ac, char **av){

  (void)av;
  if(ac != 4){
    std::cout
      << "Inform param1 [input file name], param2 [string to change] and param3 [substitute string]."
      << std::endl;
    return (1);
  }

  // 
  // [x] receive three parameters (filename, str1 and str2);
  // [ ] open file
  // [ ] copy content for <new_file>.replace replacing str1 by str2;
  // [ ] mustn't use std::string::replace nor C file manipulations functions;
  // [ ] Deal with errors;
  // 

  std::cout << "RUNNING PROGRAM" << std::endl;
  
  return (0);
}