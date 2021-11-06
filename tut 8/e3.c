#include<stdio.h>
int main()
{
	int motion[5];
	int i,tempo;
	
	for(i=0; i<5; i++)
	{
		printf("Enter value: ");
		scanf("%d", &motion[i]);
    }
	printf("initial values\n");   
    for(i=0; i<5; i++)
    {
    	printf("\t%d", motion[i]);
	}
	tempo = motion[0];
	for(i=0; i<4; i++)
	{
		motion[i]= motion[i+1];
	}
	motion[4]= tempo;
	printf("\nAfter rotating\n");
	for(i=0; i<5; ++i)
	{
		printf("\t%d", motion[i]);
	}
	return 0;
}