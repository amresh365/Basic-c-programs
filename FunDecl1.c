#include<stdio.h>
char fun()
{
	return 'a';
}

int main()
{
	char c = fun();
	printf("Character is: %c", c);
}