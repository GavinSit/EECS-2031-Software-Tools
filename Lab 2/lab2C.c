/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>
#include<string.h>


int main () {
  char array[21];
  char exitStr[] = "quit";
  char c;
  int index = -1;
  int i;

  do {
    printf("Enter a word and a character separated by blank: ");
    scanf("%s %c", &array, &c);

    if (strcmp(array,exitStr) != 0){    
      for(i = 0; i < strlen(array); i++){
        if(array[i] == c){
	  index = i;
          i = strlen(array);
        }
      }
    
      printf("Input word is \"%s\". Contains %d characters. Index of '%c' is in %d\n", array, strlen(array), c, index);
    }
  }while (strcmp(array,exitStr) != 0);

  return 0;
}


