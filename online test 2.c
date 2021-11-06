// IT21258008 , Group 4.2 , Gamage W.G.S.Y.
#include<stdio.h>
int main()
{
	int noofplayers,round1,round2,round3,round4,number=1;
	float avg;
	
	printf("How many players are in the race : ");
	scanf("%d", &noofplayers);
	
	while(number <= noofplayers)
	{
		printf("\nEnter the score of player %d (between 0-5)",number);
		printf("\nround 1 -");
		scanf("%d", &round1);
		
		printf("\nround 2 -");
		scanf("%d", &round2);
		
		printf("\nround 3 -");
		scanf("%d", &round3);
		
		printf("\nround 4 -");
		scanf("%d", &round4);
		
		avg = (round1+round2+round3+round4)/4.0;
		
		printf("\nAverage score - %.2f",avg);
		number++;
	}
	return 0;
}
