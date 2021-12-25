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
  
}
