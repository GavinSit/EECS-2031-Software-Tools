/***************************************
* EECS2031 – Lab3 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>

#define SIZE 16
void printBinary(short int n );

/*counting digits*/

int main () {
  int c, i,index;
  short flags = 0;
  printf("flags: ");printBinary(flags); printf("\n\n");

  while ((c = getchar()) != EOF){
    if (c == '0'){  // if a digit with numerical value x, turn bit x of flags on
	  flags = flags |(1<<0) ;
    }else if (c == '1'){
      flags = flags |(1<<1);
    }else if (c == '2'){
      flags = flags |(1<<2);
    }else if (c == '3'){
      flags = flags |(1<<3);
	}else if (c == '4'){
      flags = flags |(1<<4);	
	}else if (c == '5'){
      flags = flags |(1<<5);
	}else if (c == '6'){
      flags = flags |(1<<6);
    }else if (c == '7'){
      flags = flags |(1<<7);	
    }else if (c == '8'){
      flags = flags |(1<<8);
    }else if (c == '9'){
      flags = flags |(1<<9);	
    }	  
  }
  printf("\nflags: "); printBinary(flags); printf("\n");
  // output  method 1
  for(i=0; i<=9; i++)  {
    int check = flags & (1 << i);   // is bit i is on? 0 or 1
    if ( check )  // check == 1
      printf("%d: %s\n", i, "yes");
    else printf("%d: %s\n", i, "no");
  } 

  // output2  method 2
  printf("------------------\n");
  for(i=0; i<=9; i++)  {
    if ( (flags >> i) & 1)  // if bit i is on
       printf("%d: yes\n", i);
    else printf("%d: no\n", i);
  }

 return 1;  
  

 }

void printBinary(short int n ){
   //printf("binary: ");
   int cou = SIZE-1;
   int k[SIZE]={0};

   while (n) {
      if (n & 1)
         k[cou]=1; //printf("1");
      else
         k[cou]=0; //printf("0");

      n >>= 1; 
      cou--;
   }
   int i=0;
   for(; i< SIZE;i++)
   {
      printf("%d", k[i]);
      if ((i+1)%8==0)
      {
         printf(" ");
      }
   }
}
