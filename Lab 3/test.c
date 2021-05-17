#include <stdio.h>

#define SIZE 16

void printBinary(short int);

int main()
{
    short int flags = flags | (1 <<5) ;

    printBinary(1<<5);
    printf("\n\n");
    printBinary(flags);
    printf("\n\n");
    flags = flags & ~(1<<5);
    printBinary(flags);
    
    return 0;
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