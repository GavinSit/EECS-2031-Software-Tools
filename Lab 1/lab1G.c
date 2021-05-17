/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>

int main(){
  int count, lines;
  count = lines = 0;   
  int c = getchar();
    
  while( c != EOF)
  {
    if (c != '\n'){
      ++ count;
    }else{
      ++ lines;
    }
    c =  getchar();  /* read again */

  }
  printf("# of chars: %d \n", count);
  printf("# of lines: %d \n", lines);
  return 0;

}
