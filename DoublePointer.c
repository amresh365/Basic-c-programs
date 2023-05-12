#include<stdio.h>  
void main ()  
{  
    int a = 10;  
    int *ptr1;  
    int **ptr2;   
    ptr1 = &a; 
    ptr2 = &ptr1;  
    printf("Address of a: %x\n",ptr1); 
    printf("Address of ptr1: %x\n",ptr2); 
    printf("Value stored at ptr1: %d\n",*ptr1);  
    printf("Value stored at ptr2: %d\n",**ptr2); 
}  