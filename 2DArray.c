#include<stdio.h>
int fun(int a);
main()
{
int n,k;
printf("enter a number ");
scanf("%d",&n);

	k=fun(n);
	
	printf("%d",k);
}
int fun(int a)
{
	int s ;
	if(a==1)
	{
		return (a);
	}
	s=s+fun(a-1);
	return s;
}