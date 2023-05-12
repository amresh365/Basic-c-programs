#include <stdio.h>            
void main()
{            
int number=50;        
int *ptr;     
ptr=&number;       
printf("Address of pointer variable is: %u \n",ptr);        
ptr=ptr-1;       
printf("After decrement, address of pointer variable is: %u \n",ptr);     
}