#include<stdio.h>
int main()
{
	int i, j;
	for(i=0; i<5; i++)
	{
		printf("i= %d", i);
		printf(",");
		for(j=0; j<5; j++)
		{
			if(j == 2)
			break;
			printf("j= %d ", j);
		}
		printf("\n");
	}
	return 0;
}