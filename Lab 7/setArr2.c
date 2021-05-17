/***************************************
* EECS2031 – Lab 7 *
* Author: Sit, Gavin*
* Email: gavinsit@my.yorku.ca *
* eecs_num: gavinsit *
* York #: 215043870
****************************************/
#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, 0);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]);   /* should be 0,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     arr[index] = &i;
}

/*it is setting all the values to arr[0] which in turns gives you the vaules
arr[0] -*-> 400
arr[1] -*-> 0
arr[2] -*-> 0
arr[3] -*-> 0
arr[4] -*-> 0
all the values are set to arr 0 which means the other indexes are empty
so the first pass it is 0, then 100, then 200, then 300, and finally for the last pass, 400. 
*/
