/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>
#include <string.h>

int main() {
  int count[10] = {0};  
  int i;
  int c = getchar();

  while( c != EOF) {
    if (c >= 48 && c <= 57){
      count[c-48] ++;
    }

    c =  getchar();  /* read again */
  }

  for (i = 0; i < 10; i++){
    printf("%d: %d\n", i, count[i]);
  }

  return 0;
}
