/***************************************
* EECS2031 – Lab 5*
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 40

int isPalindrome (char *);
void printReverse (char *);

int main ()
{   
   int result;  /*char c; int i;  int count=0;*/
   char arr[SIZE];
   char exitCond[] = "quit\n";
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, exitCond) != 0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      result = isPalindrome (arr);
      if (result==1) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{
	int i;
	int arraySize = strlen(str) - 1; 
	
	for (i = 0; i <  strlen(str) / 2; i ++){
		if(*(str + i) != *(str + arraySize - i)){
			return 0; 
		}
	}
	return 1;
}

// assume the \n was removed manually
void printReverse(char * str){
  int i = strlen(str) -1;
  while ( i >=0 ){
     printf("%c", *(str+i) );  // or  putchar(*(str+i));
     i--;
  }
}
