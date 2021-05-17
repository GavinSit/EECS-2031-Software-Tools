/***************************************
* EECS2031 – Lab3 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)

double r_avg(int, int);

int main(int argc, char *argv[])
{

      int input; int count=0; int sum=0;
      double resu;

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
          sum += input;
          count ++;

          resu = r_avg(sum, count);
          MY_PRINT(sum, count, resu);
 	     
          /* read again */
          printf("enter number (-1 to quit):  ");
          scanf("%d", &input);
	
       }  
	
       return 0;
}
