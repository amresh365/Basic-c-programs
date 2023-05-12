#include <stdio.h>

/* Iterative function to reverse digits of num*/
int reverseDigits(int num)
{
	int rev_num = 0;
	while (num > 0) 
	{
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}

/*Driver program to test reverseDigits*/
int main()
{
	int num;
	printf("Enter the number to be reversed:");
	scanf("%d", &num);
	printf("Reverse of no. is %d", reverseDigits(num));
	return 0;
}