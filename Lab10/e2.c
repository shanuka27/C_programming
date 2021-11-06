#include<stdio.h>
int main(void)
{
	int i, no;
	char itemID[5];
	char name[10];
	int qyt;
	float price;
	
	FILE *writefPtr;
	writefPtr = fopen("purchase.txt", "w");
	if ( writefPtr == NULL)
	{
	    printf("Fail to create file\n"); 
		return -1;
	}
	for(i=0; i<4; i++)
	{
		printf("Enter itemID :");
		scanf("%s", itemID);

		printf("Enter item Name :");
		scanf("%s", name);		

		printf("Enter quantity :");
		scanf("%d", &qyt);

		printf("Enter price(for 1 kg) :");
		scanf("%.2f", &price);				
	}
	puts("");
	
	fprintf(writefPtr, "%s\t %s\t %d\t %.2f\n", itemID, name, qyt, price);//Write details to the file
	
	return 0;
}