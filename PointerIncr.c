// Program to demonstrate pointer Increment

#include<stdio.h>
int main()
{  
int number=50;        
int *ptr;     
ptr=&number;      
printf("Address of pointer variable is: %u \n",ptr);        
ptr=ptr+1;        
printf("After increment,address of pointer variable is: %u \n",ptr);     
return 0;  
} 