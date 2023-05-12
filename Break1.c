#include<stdio.h>
int main()
{
	int a, sum=0;
	while(1)
	{
		printf("Enter a number:");
		scanf("%d", &a);
		if(a == -1)
		{
			break;
		}
		sum = sum+a;
	}
	printf("%d", sum);
	return 0;
}