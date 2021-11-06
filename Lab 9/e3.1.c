#include<stdio.h>
int main()
{
	int mark[3][3] = {0};
	int i,j,sum;
	float avg;
	for(i = 0; i < 3; i++)
	{
		printf("Student no. %d\n", i+1);
		for(j = 0; j < 3; j++)
		{
			printf("Enter Score %d :", j+1);
			scanf("%d", &mark[i][j]);
		}
		printf("\n");
	}
	printf("Student NO.\tExam Score\tAverage\n");
	for(i = 0; i < 3; i++)
	{
		sum = 0;
		printf("%d\t\t", i+1);
		for(j = 0; j < 3; j++)
		{
			sum = sum + mark[i][j];
			printf("%3d", mark[i][j]);		
		}
		avg = sum/3.0;
		printf("\t%.2f\n", avg);	       	
	}
	return 0;
}