#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "func.h"



int main(){
  //VARIABLES
  int length;
  std::string generated_pwd;


  //Seed initiation
  srand(time(NULL));

  //Main code
  std::cout<<"Enter required length:  ";
  std::cin>>length;

  generated_pwd = pwdgen(length);

  std::cout<<std::endl;
  std::cout<<"Your generated password is: " + generated_pwd;

  //Prevent prompt of closing
  std::cin>>length;


  return 0;
}
