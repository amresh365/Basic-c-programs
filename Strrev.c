#include<stdio.h>  
#include <string.h>    
int main()
{    
  char str[20];    
  printf("Enter string: ");    
  gets(str); //reads string from console    
  printf("Original String is: %s",str);    
  printf("\n Reverse String is: %s",strrev(str));    
 return 0;
}