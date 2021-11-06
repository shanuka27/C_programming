#include<stdio.h>

int main()
{
	int x,digit1,digit2,digit3,digit4,digit5;
	  
	printf("Enter the five digit no:");
	scanf("%d", &x);
	
	digit5 = x%10;
	x=x/10;
	
	digit4 = x%10;
	x=x/10;
	
	digit3 = x%10;
	x=x/10;
	
	digit2 = x%10;
	x=x/10;
	
	digit1 = x%10;
	
	printf("%d %d %d %d %d \n",digit1,digit2,digit3,digit4,digit5);
	
	return 0;
}