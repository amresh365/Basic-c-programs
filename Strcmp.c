#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20], str2[20];
	int res;
	printf("Enter First String:");
	scanf("%s", str1);
	printf("Enter Second String:");
	scanf("%s", str2);
	//printf("Enter Third String:");
	//scanf("%s", str3);
	res = strcmp(str1,str2);
	printf("Compare string result is: %d", res);
	//printf("Concatenated string is: %s", strcat(str1,str2,str3));
}