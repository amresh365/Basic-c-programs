#include<stdio.h>
int main(){
	int num,sum=0;
	printf("Enter the number:\n");
	scanf("%d", &num);
	while(!(num == -1)) {
		sum = sum+num;
		scanf("%d", &num);
		
	}
	printf("Sum of number is %d", sum);
	return 0;
}