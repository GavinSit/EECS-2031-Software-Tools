/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>

float sum(float i, float j);

int main()
{
   float x, y;
   printf("Enter two float numbers separated by ##: ");
   scanf("%f##%f", &x, &y);
   float su= sum(x,y);
   printf("%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
