#include<stdio.h>  
int main()
{  
float number=50.0;        
float *ptr;      
ptr=&number;      
printf("Address of pointer variable is: %u \n",ptr);        
ptr=ptr+3;   //adding 3 to pointer variable    
printf("After adding 3, address of pointer variable is: %u \n",ptr);       
return 0;  
} 
