#include<stdio.h>

int main()

{
	int angle1, angle2, angle3, totalangle;
	
	printf("enter angle 1: ");
	scanf("%d", &angle1);

	printf("enter angle 2: ");
	scanf("%d", &angle2);
	
    printf("enter angle 3: ");
	scanf("%d", &angle3);	
	
	totalangle = angle1+angle2+angle3;
	
	if(totalangle == 180)
	{
		printf("trangle");
	}
	else
	{
		printf("not a trangle");
	}
	return 0;
}