/***************************************
* EECS2031 – Lab 4 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

     char input[SIZE2];    
     char name[SIZE];  
     char str[] = "xxx\n";
     int age;
     double bottom, top;
     float wage; 
     char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];

     printf("Enter name, age and wage (exit to quit): ");
     fgets(input, 40, stdin);

     while (strcmp(input, str) != 0)
     {    
       sscanf(input, "%s %d %f", name, &age, &wage);
       name[0] = toupper(name[0]);
       age += 10;
       wage *= 2;
       top = ceil(wage);
       bottom = floor(wage);
       sprintf(resu, "%s-%d-%.3f-[%.0f,%.0f]", name, age, wage, bottom, top); 
       
       
       strcat(resu2, resu);
   
       sprintf(resu3, "%s", resu2);
 
       printf("%s \n%s \n%s \n", resu, resu2, resu3);

        /* use fgets to read again */
        printf("Enter name, age and wage (xxx to quit): ");
        fgets(input, 40, stdin);
     } 
     
      return 0;
}
