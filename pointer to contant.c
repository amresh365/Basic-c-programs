#include<stdio.h>
main()
{
	
	const int x=5;
	
	int *p;   /////pointer to const
    int **q,***r;
	p=&x;
	q=&p;
    r=&q;
	printf("x=%d",x);
	++(*p);
	printf("x=%d\n",x);
	printf("%d\n",p);
	printf("%d\n",q);
    printf("%d\n",r);
	
	return 0;
	
	
}