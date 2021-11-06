#include <stdio.h>

int main(void)
{
	int mark[3][3] = {0};
	int i, j, temp, total;
	float avg;

	for (i=0; i<3; i++)
	{
		printf ("Student no %d:\n", i+1);
		
		for (j=0; j<3; j++)
		{
			printf ("Score %d:", j+1);
			scanf ("%d", &mark[i][j]);
		}
	}
	
	printf("Student No\t Score\t\t\t Avarage\n");	
	for (i=0; i<3; i++)
	{
		total = 0;
		printf("%d\t\t",i+1);
		for(j=0; j<3; j++)
		{
			//temp = mark[i][j];
			total = total+ mark[i][j];//temp;
			printf("%d ",mark[i][j]);
		}
		avg = total/3.0;
		printf("\t\t%.2f \n",avg);
		
	}	
	return 0;
}
