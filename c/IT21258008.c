// Malabe_campus  Group_4.2  Gamage W.G.S.Y.
#include<stdio.h>
#include<string.h>

int main(){
	//variable declaration
	float item[3]={120.00,40.00,250.00};
	int qtySold[3];
	int counter=0;
	float item1=0,item2=0,item3=0;
	int x;
	
	//loop to get user inputs
	while(counter<3){
		
		printf("Enter quatity of %.2f = ", item[counter]);
		scanf("%d",&qtySold[counter]);
		++counter;
	}
	
	//calculations for highest income
	item1=item[0]*qtySold[0];
	item2=item[1]*qtySold[1];
	item3=item[2]*qtySold[2];
	
	//checking the highest income
	if((item1>item2)&&(item1>item3))
	{
		x=1;	
	}
	else if((item2>item1)&&(item2>item3))
	{
		x=2;	
	}
	else if((item3>item2)&&(item3>item1))
	{
		x=3;	
	}
	
	counter=0;
	
	printf("Item array\n");
	while(counter<3)
	{
		printf("%.2f ,",item[counter]);// display iteam array
		++counter;  //increment counter 
	}
	
	counter=0;
	
	printf("\nqtySold array\n");
	
	while(counter<3)
    {
		printf("%d ,",qtySold[counter]);// display quantity array
		++counter;//increment counter 
	}
	
	printf("\nItem which generate highest income : %d",x);// highest income
	
	return 0;
}//end of main program