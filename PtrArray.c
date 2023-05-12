#include<stdio.h>
int main()
{
	int a[5],*ptr;
	ptr = &a[0];
	printf("Enter the numbers in array:");
	for(int i=0;i<=4;i++)
	{
		scanf("%d", ptr+i);
	}
	printf("\nDisplay the numbers in array:");
	for(int i=0;i<=4;i++)
	{
		printf("%d", *(ptr+i));
		printf(" ");
	}
}