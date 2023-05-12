#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int strlength;
	printf("Enter string:");
	gets(str);
	strlength = strlen(str);
	printf("Given string length is: %d", strlength);
}