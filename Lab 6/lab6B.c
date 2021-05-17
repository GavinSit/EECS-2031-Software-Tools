/***************************************
* EECS2031 – Lab 6*
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit * 
* York Student #: 215043870
****************************************/

#include <stdio.h>
#include <string.h>

void exchange(char arr[30][50]);
void printArray(char arr[30][50], int n);

int main(){
	char inputs[30][50];
	int current_row = 0, i;
	char exitCond[] = "xxx\n";
	
	printf("Enter a string: this is input %d, ", current_row);
	fgets(inputs[current_row], 50, stdin);

	while(strcmp(inputs[current_row], exitCond) != 0){
		current_row ++; 
		
		printf("Enter a string: this is input %d, ", current_row);
		fgets(inputs[current_row], 50, stdin);
	}	
	
	for(i = 0; i < current_row; i ++){
		printf("[%d]: this is input %d, %s", i, i, inputs[i]);
	}
	
	exchange(inputs);
	printArray(inputs, current_row); 
	
	return 0;
}

void exchange (char arr[30][50]){
	char temp[30];
	int i;
	//swap 3 and 4
	for(i = 0; i < 30; i ++){
		temp[i] = arr[2][i];
		arr[2][i] = '\0';
	}

	for(i = 0; i < 30; i ++){
		arr[2][i] = arr[3][i];
		arr[3][i] = '\0';
	}
	for(i = 0; i < 30; i ++){
		arr[3][i] = temp[i];
	}
	
	//swap 5 and 6
	char temp2[30];
	for(i = 0; i < 30; i ++){
		temp[i] = arr[4][i];
		arr[4][i] = '\0';
	}
	for(i = 0; i < 30; i ++){
		arr[4][i] = arr[5][i];
		arr[5][i] = '\0';
	}
	for(i = 0; i < 30; i ++){
		arr[5][i] = temp[i];
	}
}

void printArray(char arr[30][50], int n){
	int j;
	printf("== after swapping == \n");
	for(j = 0; j < n; j++){
		printf("[%d]: this is input %d, %s", j, j, arr[j]);
	}	
}
