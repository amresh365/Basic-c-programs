#include<stdio.h>  
int main()
{  
double number=50.0;        
double *ptr;      
ptr=&number;      
printf("Address of pointer variable is: %u \n",ptr);        
ptr=ptr-4;   //subtracting 4 to pointer variable    
printf("After subtracting 4, address of pointer variable is: %u \n",ptr);       
return 0;  
} 