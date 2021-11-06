#include<stdio.h>

int main()
{
	int type;
	
	printf("Enter pizza type :");
	scanf("%d", &type);
	
	if(type == 1)
	{
		printf("chicken pizza");
	}
	else if(type == 2)
	{
		printf("chees pizza");
	}
	else if(type == 3)
	{
		printf("vegetable pizza");
	}
	else
	{
		printf("Invalid type. Use only 1, 2, 3 types only");
	}
	
	return 0;
}