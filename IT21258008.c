// Gamage W.G.S.Y.   Group 4.2    IT21258008
#include<stdio.h>
float calAdditionalCharges( int orderType, float subTotal );
float  calTotalBill(float subTotal, float charges);
int mani()
{
	int type;
	float subtotal,Aditionalcharges,Totalbill;
	
	printf("Enter sub total :");
	scanf("%.2f", &subtotal);
	
	printf("Enter order type as 1/2/3 :");
	scanf("%d", &type);
	
	Aditionalcharges = calAdditionalCharges( type , subtotal );
	
	Totalbill = calTotalBill( subtotal, Aditionalcharges); 
	
	printf("Total bill amount : %.2f", Totalbill);
	
	return 0;
}
float calAdditionalCharges( int orderType, float subTotal )
{
	int type;
	float subtotal,total;
	
	if(type == '1')
    	total = subtotal + subtotal * 0.15 * 0.1;
	if(type == '2')
		total = subtotal + subtotal * 0.15;
	else if(type == '3')
		total = subtotal + subtotal * 0.15 * 0.05;
	else
	    printf("Invalid type");
	return total; 
}
float  calTotalBill(float subTotal, float charges)
{
	float Aditionalcharges, subtotal;
	float Charges;
	
	Charges = Aditionalcharges + subtotal;
	
	return Charges;
}