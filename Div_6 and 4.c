#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
/*	if((num%6)==0)
	{
		if((num%4)==0)
		printf("Input %d is divisible by 6 and 4", num);
	}
	else
	{
		printf("Input %d is not divisible by 6 and 4", num);
	} */
	if((num%6 == 0) &&(num%4 ==0))
	{
		printf("%d is dividible by 6 and 4");
	}
	}