/***************************************
* EECS2031 – Lab 4 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>

#define MY_PRINT(z)  printf("running average is %.3f\n", z)

double r_avg(int);

int count = 0;
int sum = 0;

int main(int argc, char *argv[])
{
	
   int input;  
   printf("enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        double res = r_avg(input);
        MY_PRINT(res);

        printf("enter number (-1 to quit): ");
        scanf("%d", &input);
    }
	
    return 0;
}

double r_avg(int currentInput)
{
    count ++;
    sum += currentInput;
    double resu = sum / count;
    return resu;
     
}
