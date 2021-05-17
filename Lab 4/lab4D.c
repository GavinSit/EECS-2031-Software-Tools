/***************************************
* EECS2031 – Lab 4 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char wageS[10];
    int age, count, i;
    float wage;
    count = 0;

    printf("Enter name age and wage: ");
    scanf("%s %s %s", name, ageS, wageS); 
       
    while (strcmp(name, "xxx") != 0)        
    {  
	for(i=0; i <= strlen(name); i ++){ 
	  inputs_table[count][i] = name[i];
        }
	for(i=0; i <= strlen(ageS); i ++){ 
	  inputs_table[count+1][i] = ageS[i];
	}
        for(i=0; i <= strlen(wageS); i ++){ 
	  inputs_table[count+2][i] = wageS[i];
	}
	count += 3;

	for(i=0; i < strlen(name); i ++){
	  name[i] = toupper(name[i]);	
	}
	age = atoi(ageS); 
	wage = atof(wageS);
        age += 10;
        wage *= 1.5;

	sprintf(ageS, "%d",age);
	sprintf(wageS, "%.2f", wage);

	for(i=0; i < strlen(name); i ++){ 
	  inputs_table[count][i] = name[i];
        }
	for(i=0; i < strlen(ageS); i ++){ 
	  inputs_table[count+1][i] = ageS[i];
	}
        for(i=0; i < strlen(wageS); i ++){ 
	  inputs_table[count+2][i] = wageS[i];
	}
	count += 3;

       /* read again using scanf(%s %s %s) */ 
       printf("Enter name age and wage: ");
       scanf("%s %s %s", name, ageS, wageS); 
    }
    
     printf("\nrecords generated %s %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */      
    for(i = 0; i < count; i +=3){
      printf("%s %s %s \n",inputs_table[i], inputs_table[i+1], inputs_table[i+2]);
    }

     return 0;
}

