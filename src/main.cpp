#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "func.h"


int main(){
  //Variables
  int length;
  std::string generated_pwd;
  std::ifstream runtime_file_read;
  std::ofstream runtime_file_write;
  std::string file_line;

  //Seed initiation
  srand(time(NULL));

  //Main code
  runtime_file_read.open("../runtime/runtime.data");
  std::getline(runtime_file_read, file_line);
  runtime_file_read.close();
  length = atoi(file_line.c_str());

  generated_pwd = pwdgen(length);

  //Write password to file
  runtime_file_write.open("../runtime/runtime.data", std::ios::trunc);
  runtime_file_write << generated_pwd;
  runtime_file_write.close();


  return 0;
}
