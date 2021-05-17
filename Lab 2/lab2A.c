/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>
#include <stdbool.h>

bool isDigit(char);

int main() {
  int integer = 0;
  char character;
  int sum;

  do {
    printf("Enter an integer and a character separated by blank: ");
    scanf("%d %c", &integer, &character);
    if (integer == -10000){
      break;
    }

    if (isDigit(character) == 0){
      printf("Character '%c' does not represent a digit \n", character);
    }else {
      sum = (int) character - 48 + integer;
      printf("Character '%c' represents a digit. Sum of %d and %c is %d \n",character, integer, character, sum);
    }
  } while(integer != -10000);
 
  return 0;
}

bool isDigit(char c){
  if (c >= '0' && c <= '9'){
    return 1;
  }
  return 0;
}
