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
  int c = getchar();

  while( c != EOF) {
    if (c >= 'a' && c <= 'z'){
      putchar(c-32);
    }else {
      putchar(c);
    }

    c =  getchar();  /* read again */
  }

  return 0;
}
