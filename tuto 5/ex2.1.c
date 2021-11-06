#include<stdio.h>

int main()
{
	int sum,Average,count = 0,number = 0;
	
	printf("Enter number :");
	scanf("%d", &number);
	
	while (number>=0)
	{
		sum = sum + number;
		
		count++;
		
		printf("Enter number :");
		scanf("%d", &number);
	}
		           
	Average = sum/count;
	
	printf("Sum of positive numbers : %d", sum);
	printf("\nAverage is %d", Average);
	return 0;
}