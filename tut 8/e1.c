#include<stdio.h>
int main()
{
	int marks[10];
	int i, userinput, sum = 0;
	float mean;
	for(i=0; i<10; i++)
	{
		printf("Enter marks: ");
		scanf("%d", &userinput);
		
		if(userinput > 0 && userinput < 20)
			marks[i] = userinput;
		else
			printf("invalid number\n");
	}	
	for(i=0; i<10; i++)
	{
    	printf("%d\t", marks[i]);
	}
	for(i=0; i<10; i++)
	{
		sum = sum + marks[i];
	}
	
	mean = (sum)/10.0;
	printf("\nmean value is %.2f", mean);			
	return 0;
}