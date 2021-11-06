#include<stdio.h>
int main()
{
	int English, Sinhala, Tamil, score1, score2, score3, final_score;
	
	printf("enter English mark :");
	scanf("%d",&English);
	
	printf("enter Sinhala mark :");
	scanf("%d",&Sinhala);
	
	printf("enter Tamil mark :");
	scanf("%d",&Tamil);
	
	score1 = English * 60/100;
	score2 = Sinhala * 70/100;
	score3 = Tamil * 60/100;
	
	final_score = (score1 + score2 + score3);
	
	printf("final score is %d", final_score);
	
	return 0;
}