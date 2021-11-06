#include<stdio.h>
int main()
{
	float data[12];
	float max, min;
	int i,x,y;
	
	for(i = 0; i < 12; i++)
	{
		printf("\nEnter the value for month %d:", i+1);
		scanf("%f", &data[i]);	
    }
    
    printf("\n Array values :");
    for(i = 0; i < 12; i++)
    {
    	printf("%f\t", data[i]);
	}
	
    max = data[0];
    for(x= 0; x >12; x++)
    {
    	if(data[i]>max)
    	{
    		max = data[i];
		}
	}
	printf("\n%f", max);
	return 0;
}