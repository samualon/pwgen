#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "func.h"


std::string pwdgen(int length)
{
  //password character array
  std::string pwd_array[length];
  std::string password;

  //Fills array with random numbers or letters
  for(int i = 0; i <= length; i++)
  {
    pwd_array[i] = rand_char();
  }

  //Concatinate array to string
  for(int i = 0; i <= length; i++){
    password += pwd_array[i];
  }

  return password;
}


//Returns a single character string of a random letter or number
std::string rand_char()
{
  int rand_num = rand() % 62;
  std::string letter_array[52] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
  "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A",
  "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R",
  "S", "T", "U", "V", "W", "X", "Y", "Z"};

  if(rand_num > 9)
  {
    return std::to_string(rand_num);
  }
  else
  {
    return letter_array[rand_num - 10];
  }
}
