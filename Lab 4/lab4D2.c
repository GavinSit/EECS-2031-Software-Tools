/***************************************
* EECS2031 – Lab 4 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
     char name[10], ageS[10], wageS[10];
     int current_row, age, i, j, count;
     float wage;
     current_row = 0;
	 const char space[2] = " ";
	 char *temp[3];
	 
     printf("Enter name age and wage: ");
     fgets(input_table[current_row], 30, stdin);   // add a /n
	 /* need to 'tokenize' the read in line*/	 
	 	i = 0;
	 	temp[i] = strtok(input_table[0], space);
	 	while(temp[i] != NULL){
	 		temp[++i] = strtok(NULL, space);

	 	}
	 	
	 	sprintf(ageS, "%s", temp[1]);
	 	sprintf(wageS, "%s", temp[2]);
	 
     while(strcmp(name, "xxx") != 0)        
     {    
	 	printf("output %s, %s, %s \n", name, ageS, wageS);
	 	
	 	current_row ++;
	 	
	 	printf("Enter name age and wage: ");
     	fgets(input_table[current_row], 30, stdin);   // add a /n
     	
     	
     	
     	/* need to 'tokenize' the read in line*/	 
	 	i = 0;
	 	temp[i] = strtok(input_table[0], space);
	 	while(temp[i] != NULL){
	 		temp[++i] = strtok(NULL, space);

	 	}
	 	
	 	sprintf(name, "%s", temp[0]);
	 	sprintf(ageS, "%s", temp[1]);
	 	sprintf(wageS, "%s", temp[2]);
     }

     printf("\nrecords generated in %s %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
     for(i = 1; i < count; i +=4){
       printf("%s %s %s \n",input_table[i], input_table[i+1], input_table[i+2]);
     }

     return 0;
}
/*
 j=0;
 count = 1;
	 for(i = 0; i < strlen(input_table[current_row]); i ++){
	   if(input_table[current_row][i] == ' ' || input_table[current_row][i] == '\0'){
	     count ++;
	     j = 0;
	   }else{
	     input_table[current_row+count][j] = input_table[current_row][j];
	   }
	 }
	 
	 current_row += 4;

         // read again using fgets()
 	 printf("Enter name age and wage: ");
         fgets(input_table[current_row], 30, stdin);   // add a /n
*/

