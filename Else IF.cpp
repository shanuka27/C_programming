#include<stdio.h>

int main(void)
{
	int mark;
	
	printf("Enter maths mark :");
	scanf("%d", &mark);
	
	if(mark>=75)
	{
			printf("A");
    }
	
	else if(mark>=65)
	{
	
		printf("B");
    }
    
    else if(mark>=55)
    {
    	printf("C");
	}
	
	else if(mark>=40)
	{
		printf("S");
	}
	
	else
	{
		printf("F");
	}
	return 0;
}