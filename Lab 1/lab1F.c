/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>

int main(){
  int count = 0;  
  int c = getchar();
    
  while( c != EOF)
  {
    if (c != '\n')
      ++ count;
    c =  getchar();  /* read again */

  }
  printf("# of chars: %d \n", count);
  return 0;

}
