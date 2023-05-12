#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20], str2[20];
	printf("Enter First String:");
	scanf("%s", str1);
	strcpy(str2,str1);
	printf("Value of second string is: %s",str2);
}