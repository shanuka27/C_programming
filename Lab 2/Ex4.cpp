#include <stdio.h>

struct item
{
	int itemNo;
	double price;
	int quantity;
	
}item1,item2;

int main(void)
{
	printf("Enter item no:");
	scanf("%d", &item1.itemNo);
	
	printf("Enter item price:");
	scanf("%lf", &item1.price);
	
	printf("Enter item quantity:");
	scanf("%d", &item1.quantity);	

	printf("Enter item no:");
	scanf("%d", &item2.itemNo);
	
	printf("Enter item price:");
	scanf("%lf", &item2.price);
	
	printf("Enter item quantity:");
	scanf("%d", &item2.quantity);		
	
	printf("First item no :%d\n", item1.itemNo);
	printf("First item price :%lf\n", item1.price);
	printf("First item quantity :%d\n", item1.quantity);
	
	printf("Second item no :%d\n",item2.itemNo);
	printf("Second item price :%lf\n",item2.price);
	printf("Second item quantity :%d\n",item2.quantity);	
	
	return 0;
	
}