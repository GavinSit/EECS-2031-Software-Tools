/***************************************
* EECS2031 – Lab 5*
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit * 
* York Student #: 215043870
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 30

void sortArray(char *);


int main ()
{   
   int i;
   char arr[SIZE];
   char exitCond[] = "quit\n";
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, exitCond) != 0) {
		sortArray(arr);
		
		for(i = 0; i < strlen(arr) - 1; i ++) {
			printf("%c", arr[i]);
		}	
		printf("\n\n");
		
		fgets(arr,SIZE,stdin);
    }
    return 0;
}

void sortArray(char *str){
	int i, j, index; 
	char temp; 
	
	for(i = 0; i < strlen(str) - 2; i ++) {
		index  = i; 
		for(j = i; j < strlen(str) - 1; j ++) {
			if(*(str + index) > *(str + j)){
				index  = j; 
			}				
		}
		temp = *(str + index);
		*(str + index) = *(str + i);
		*(str + i) = temp; 
	}
}