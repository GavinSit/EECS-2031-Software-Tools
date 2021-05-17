#include <stdio.h>

void setArr ();

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;
           
     int j=100;
     *arr[0] = j;
     //arr[0] = &j;
     
     int k = 200;
     arr[1] = &k;
     
     int l = 300;
     arr[2] = &l;

     setArr();
     
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]);   /* should be 0,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of some value */
void setArr (){
     int i = 400;
     arr[3] = &i;
     
     int j = 500; 
     arr[4] = &j;
}