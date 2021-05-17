/***************************************
* EECS2031 – Lab3 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>

int isLeap(int);


int main(){
  char input[4]; 
  int c; 
  int boolean; 

  printf("Enter a year: ");
  scanf("%s", input);
  c = atoi(input);
  
  while(c >= 0) {
    boolean = isLeap(c);
    if (boolean == 1){
      printf("Year %d is a leap year\n", c);
    }else {
      printf("Year %d is not  a leap year\n",c);
    }
    printf("Enter a year: ");
    scanf("%s", input);
    c = atoi(input);
  }
  return 0;
}

int isLeap(int year){
  int var = 0;
  if (year % 4 == 0 && year % 100 != 0){
    var = 1; 
  }

  return var;
}


