#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter the number:");
	scanf("%d %d", &a,&b);
	printf("\nNumbers before swapping:%d %d", a,b);
	swap(&a,&b);
	printf("\nNumbers after swapping:%d %d", a,b);
}
void swap(int*x, int*y)
{
	int temp;
	temp =*x;
	*x = *y;
	*y = temp;
}