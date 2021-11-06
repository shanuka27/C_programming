#include <stdio.h>
#include <assert.h>
#include <math.h>
double hypotenuse(double side1, double side2);
void testHypotenuse(double side1, double side2);
int main()
{			
	assert(hypotenuse(3.0, 4.0) == 5.0);
	assert(hypotenuse(5.0, 12.0) == 13.0);
	assert(hypotenuse(8.0, 15.0) == 17.0);
	
	double side1, side2, hypo, result;	
	printf("Enter the length of a side 1 of the triangle: ");
	scanf("%lf", &side1 );
	printf("\nEnter the length of the side 2 of the triangle: ");
	scanf("%lf", &side2 );
	
	testHypotenuse(side1, side2);
		
	hypo = hypotenuse(side1, side2);

	result = fabs(hypo);
	
	printf("\nThe length of the hypotenuse is %.1f", result);
	
	return 0;
	
} 
double hypotenuse(double side1, double side2)
{
	
	double squareSide1,squareSide2,answer;
		
	squareSide1 = pow(side1, 2);
	squareSide2 = pow(side2, 2);
		
	answer = sqrt(squareSide1 + squareSide2);

	return answer;
}
void testHypotenuse(double side1, double side2)
{
	assert(hypotenuse(3.0, 4.0) == 5.0);
	assert(hypotenuse(5.0, 12.0) == 13.0);
	assert(hypotenuse(8.0, 15.0) == 17.0);	
}