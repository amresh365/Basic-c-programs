#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	if((num%6)==0)
	{
		printf("Input %d is divisible by 6", num);
	}
	else
	{
		printf("Input %d is not divisible by 6", num);
	}
}