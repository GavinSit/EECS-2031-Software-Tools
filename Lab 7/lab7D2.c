/***************************************
* EECS2031 – Lab 7 *
* Author: Sit, Gavin*
* Email: gavinsit@my.yorku.ca *
* eecs_num: gavinsit *
* York #: 215043870
****************************************/

/* The issue that it had was that the last node added was the only node with a value (500) in it.
The other nodes are empty, thus, segmentation fault when printing
*/

#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

int main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   struct node * cur;
   //for(cur= head; cur != NULL; cur= cur->next)
     cur=head;
     
     printf("%d ", cur->data); cur= cur->next; printf("\n");  
     printf("%d ", cur->data); cur= cur->next; printf("\n");   
     printf("%d ", cur->data); cur= cur->next; printf("\n");   
     printf("%d ", cur->data); cur= cur->next; printf("\n");   
     
     
     
   printf("\n");  


   return 0;	
}   

void insertBegining(int dat){
   struct node newNode;
   int * num = malloc(sizeof(int));
   num = &dat; 
   
   newNode.data = num;

   newNode.next = head;
   
   head = &newNode;

}
