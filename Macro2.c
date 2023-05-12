#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
	int len = 10, breadth = 5, area;

	area = AREA(len, breadth);

	printf("Area of rectangle is: %d", area);

	return 0;
}