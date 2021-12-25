#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "func.h"


std::string pwdgen(int value){
  switch(value){
    case 1:
      return simple_pwd();
    case 2:
      return medium_pwd();
    case 3:
      return high_pwd();
  }
}


std::string simple_pwd(){
  //password character array
  char pwd_array[8]

  for(int i; i = 0; i<8){
    pwd_array[i] =
  }
}

char rand_char(){
  int rand_num = rand() % 36

  switch(rand_num){
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    case 7:
     return 7;
    case 8:
      return 8;
    case 9:
      return 9;
    case 10:
      return;
  }

}
