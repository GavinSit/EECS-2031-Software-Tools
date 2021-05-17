#include <stdio.h>

/* copy the user input to output */

int main(){

  int c = getchar();

  while( c != EOF)
  {
    putchar(c);
   // or printf("%c", c);

    c =  getchar();  /* read again */
  }

  return 0;

}
