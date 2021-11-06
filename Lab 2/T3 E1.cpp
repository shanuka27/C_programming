#include<stdio.h>

int main()
{
	int radius,diameter;
	float circumference,area;
	
	printf("Enter the radius:");
	scanf("%d", &radius);
	
	diameter = radius*2;
	circumference = 2*3.14*radius;
	area = 3.14*radius*radius;
	
	printf("Diameter is :%d\n",diameter);
	printf("Circumference is :%.2f\n",circumference);
	printf("Area is :%.2f",area);
	
	return 0;
}