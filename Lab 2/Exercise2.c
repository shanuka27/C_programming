#include<stdio.h>
int main()
{
	int number1,number2;
	float sum;
	
	printf("enter first number :");
	scanf("%d",&number1);
	
	printf("enter second number :");
	scanf("%d",&number2);
	
	sum = number1 + number2;
	
	printf("sum is %.2f", sum);
	
	return 0;
}