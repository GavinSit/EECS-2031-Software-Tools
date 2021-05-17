/***************************************
* EECS2031 – Lab 5*
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit * 
* York Student #: 215043870
****************************************/
/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x);
void display(int *arr);

 int main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr)
 {
	int i; 
	for (i = 0; *(arr + i) != NULL; i ++){
		printf("%d ", *(arr + i));
	}
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr)
 {
	int i, largest = *(arr);
	for(i = 0; *(arr + i) != NULL; i ++){
		if (*(arr + i) > largest){
			largest = *(arr + i);
		}
	}
	return largest; 
 }
