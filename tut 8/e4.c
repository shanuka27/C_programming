#include<stdio.h>
int main()
{
	int number[10];
	int x,y;
	
	for (x=0; x<10; x++)
	{
		printf("Enter value %d :", x);
		scanf("%d", &number[x]);
	}
	printf("%s\t\t%s\t\t%s", "element","value", "Histogram");
	
	for (x=0; x<10; x++)
	{
		printf("\n%d\t\t%d\t\t", x, number[x]);
		
		for(y=0; y< number[x]; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}