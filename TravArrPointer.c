// Traversing Array using Pointer

#include<stdio.h>  
void main ()  
{  
    int a[5] = {10, 20, 30, 40, 50};  
    int *ptr = a;  
    int i;  
    printf("Printing array elements...\n");  
    for(i = 0; i< 5; i++)  
    {  
        printf("%d  ",*(ptr+i));  
    }  
} 