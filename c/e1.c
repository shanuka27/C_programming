#include<stdio.h>
#include<assert.h>

char qualityPoints(int average);
void test();

int main()
{
	assert('0' == qualityPoints(59));
	assert('1' == qualityPoints(60));
	assert('1' == qualityPoints(64.5));
	assert('1' == qualityPoints(69));
	assert('2' == qualityPoints(70));
	assert('2' == qualityPoints(74.5));
	assert('2' == qualityPoints(79));
	assert('3' == qualityPoints(80));
	assert('3' == qualityPoints(84.5));
	assert('3' == qualityPoints(89));
	assert('4' == qualityPoints(90));
	assert('4' == qualityPoints(94.5));
	assert('4' == qualityPoints(99));
	
	int avg;
	char qtypoint;
	
	printf("Enter average :");
	scanf("%d", &avg);
	
	qtypoint = qualityPoints(avg);
	
	printf("Result = %c", qtypoint);
	return 0;
}
char qualityPoints(int average)
{
	char result;
	
	if (average < 60)	
		result = '0';
	
	else if (average < 70)	
		result = '1';
	
	else if (average < 80)	
		result = '2';
	
	else if (average < 90)	
		result = '3';
	
	else if(average < 100)	
		result = '4';
	
	else	
		result = '-';
	
	return result;
}