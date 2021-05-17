/***************************************
* EECS2031 – Lab 7 *
* Author: Sit, Gavin*
* Email: gavinsit@my.yorku.ca *
* eecs_num: gavinsit *
* York #: 215043870
****************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printArr(int *, int);

int  main()
{ 
  char *p;
  int n, i;
	int *my_array = malloc(n * sizeof(int));
	
  printf("Size of array: ");
  scanf("%d", &n);
  /*int my_array[n];*/    
  
  
  *my_array = -10;
  for(i =1; i<n; i++)
    *(my_array+i) = i*100;

  printArr(my_array, n);
  
  p = malloc(6);
  strcpy(p, "hello");
  printf("%s\n", p);
  *(p+2) = 'X';
  printf("%s\n", p); 
  
	free(my_array);
  return 0;
}

void printArr(int * arr, int n){
  int i;
  for(i = 0; i < n; i ++){
		printf("[%d]: %d\n", i, *(arr+i));
  }
}
