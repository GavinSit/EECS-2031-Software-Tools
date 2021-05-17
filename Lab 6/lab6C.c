/***************************************
* EECS2031 – Lab 6*
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit * 
* York Student #: 215043870
****************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 8

void printArr(char *[], int );
void printArrP(char **, int );
void exchange(char *[]);

int main(){
  int i;
  char * inputs[SIZE] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys",
                      "this is input 3, kangaroos"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  printf("sizeof char*: %d, sizeof inputs: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printArr
  printArr(inputs, SIZE);

  // swap pointee of first and second element pointers

  char *temp [];
  *temp[0] = *inputs[0];

  *inputs[0] = *inputs[1];
  *inputs[1] = temp;
  printf("\npass one\n");
  // call exchange() to swap some other 'rows';
  //exchange(inputs);

  printf("\n== after swapping ==\n");   printf("===========================\n");

  // display the swapped array by calling printArr()
  printArr(inputs, SIZE);
  printf("\n");
  // display the swapped array again by calling printArrP()
  printArrP(inputs, SIZE);

  return 0;
}

void exchange(char *records[]){
	int i;
	//swap 3 and 4
	char temp [] = {records[3]};
	*records[3] = *records[4];
	*records[4] = *temp;
	//swap 5 and 6
	char temp2 [] = {*records[5]};
	*records[5] = *records[6];
	*records[6] = *temp2;
}	

void printArr(char *records[], int n){
	int i;
	for(i = 0; i < n; i ++){
		printf("[%d] -*-> %s\n", i, records[i]);
	}
}

void printArrP(char **records, int n){
	int i; 
	for (i = 0; i < n; i ++){
		printf("[%d] -*-> %s\n", i, *(records+i));
	}
}
