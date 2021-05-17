/***************************************
* EECS2031 – Lab 7 *
* Author: Sit, Gavin*
* Email: gavinsit@my.yorku.ca *
* eecs_num: gavinsit *
* York #: 215043870
****************************************/
#include <stdio.h>
#include <stdlib.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;
     
     setArr(0, 0);
	for(i=0; i<1;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]); printf("\n");
     setArr(1, 100);
	for(i=0; i<2;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]); printf("\n");
     setArr(2, 200);
	for(i=0; i<3;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]); printf("\n");
     setArr(3, 300);
	for(i=0; i<4;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]); printf("\n");		
     setArr(4, 400);
       
        


     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]);   /* should be 0,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int *i = malloc(sizeof(int));
     *i = v;
     int idx = index; 
     	arr[idx] = i;
}
