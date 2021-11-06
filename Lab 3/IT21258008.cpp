#include<stdio.h>

int main()
{
	float m, n, p, q;
	
	printf("Enter m :");
	scanf("%f", &m);
	
	printf("Enter n :");
	scanf("%f", &n);
	
	printf("Enter m :");
	scanf("%f", &p);
	
	q = m/((4*n*p)-(n*p*p));
	
	printf("q = %.1f", q);
	
	return 0;
	
}