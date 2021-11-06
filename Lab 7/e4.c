#include <stdio.h>
#include <assert.h>
#include <math.h>
float calPayment(char pkgtype);
float calDiscount();
void tertDiscount();

int main()
{
	int age;
	char type;
	
	printf("Enter package type (S/C/H) :");
	scanf("%c", &type);
	printf("Enter your age :");
	scanf("%d", &age);
}
float calPayment(char pkgtype)
{
	char type;
	if (type = 'S')
	   payment = 15000;
	else if (type = 'C')  
	   payment = 50000;
	else if (type = 'H')
	   payment = 30000;
	else
	   payment = 00000; 
	return type;
}
float calDiscount(int age, float total)
{
	float discount=0;
	if (age>=60)
}