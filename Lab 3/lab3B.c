/***************************************
* EECS2031 – Lab3 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

/* Note: need to use '-lm' in compiler for the power thing to work */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 10
 
int my_atoi (char c[]);  /* function declaration */
   
int main(){
  int a,b;
  char arr [SIZE];
  char quitstr[] = "quit";

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);

  while(strcmp(arr, quitstr) != 0)
  {
    printf("%s", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%.0f\n", b,b,b, b*2, pow(b,2));

  
   
    /* read again */
    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;
}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi (char c[])
{
  int length = strlen(c);
  int i, number;
  for (i=0;i<length; i++){
    number = number*10 + (c[i]-'0');
  }
  return number;
}
