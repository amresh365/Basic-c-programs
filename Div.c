#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	if((num%6)==0)
	{
		if((num%4)==0)
		{
			printf("The number is divisible by 6 and 4");
		}
	}
	else
	{
		printf("The number is not divisible by 6 and 4");
	}
}