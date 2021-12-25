#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "func.h"



int main(){
  //VARIABLES
  int strength;
  std::string generated_pwd;

  //CODE

  //Seed initiation
  srand(time(NULL));

  std::cout<<"Enter required strength:      (1 = low, 3 = high)";
  std::cin>>strength;

  generated_pwd = pwdgen(strength);





  return 0;
}
