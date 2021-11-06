#include<stdio.h>
#define SIZE 5
int main()
{
	int i,num;
	int number[SIZE] = {};
	FILE * cfPtr;
	cfPtr = fopen("number.dat", "w+");
	
	if(cfPtr == NULL)
	{
		printf("cannot creat file");
		return -1;
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("Enter number :");
		scanf("%d", &number[i]);
	
		if(number[i-1] == number[i])
		{
			printf("Error\n");
		}
		fprintf(cfPtr, "%d", number[i]);
	}
	fclose(cfPtr);
	
	cfPtr = fopen("number.dat", "r+");	
	if(cfPtr == NULL)
	{
		printf("cannot creat file");
		return -1;
	}
	puts("");
	for(i = 0; i < SIZE; i++)
	{
		fscanf(cfPtr, "%d\t", &number[i]);
		printf("Number is: %d\n", number[i]);	
	}	
	fclose(cfPtr);	
	return 0;
}