#include<stdio.h>
int main()
{
	char shape;
	float width,length,base,height,radius,Area;
	
	printf("Enter the first character of the shape trangle(T),Rectangle(R),Circle(C) :");
	scanf("%c", &shape);
	
	if (shape == 'R')
	{
		printf("Enter width:\n");
		scanf("%.2f", &width);
		
		printf("Enter length:\n");
		scanf("%.2f", &length);
		
		Area = width*length;
		
		printf("Area of the rectangle is :%.2f", Area);
	
	}
	else if (shape == 'T')
	{
		printf("Enter base:\n");
		scanf("%.2f", &base);
		
		printf("Enter height:\n");
		scanf("%.2f", &height);
		
		Area = base*length/2.0;
		
	    printf("Area of the trangle is :%.2f ", Area);	
	}
	else if(shape == 'C')
	{
		printf("Enter radius :");
		scanf("%.2f", &radius);
		
		Area =3.14*radius*radius;
		
		printf("Area of the Circle is :%.2f", Area);
	}
	else
	{
		printf("Invalid character. Try again");
	}
	
	
	return 0;
}