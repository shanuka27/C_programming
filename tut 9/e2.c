#include<stdio.h>
int main()
{
	int i,j;
	int matrix1[4][4] = {0};
	int matrix2[4][4] = {0};
	int answere[4][4] = {0};
	
	for(i=0; i<4; i++)
	{
		printf("Enter first matrix %d row :",i+1);
		scanf("%d", matrix1);
    }
    printf("\n");
    for(j = 0; j<4; j++)
    {
    	printf("Enter second matrix %d row :",j+1);
		scanf("%d", matrix2);
	}
	
	
	return 0;
}