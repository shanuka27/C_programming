#include<stdio.h>

int main()
{
	int module1,module2,module3,module4,sum;
	
	
		printf("Enter module1 marks :");
		scanf("%d", &module1);
		printf("\nEnter module2 marks :");
		scanf("%d", &module2);
		printf("\nEnter module3 marks :");
		scanf("%d", &module3);
		printf("\nEnter module4 marks :");
		scanf("%d", &module4);
		
		sum = module1 + module2 + module3 + module4;
		
		printf("\nTotal module marks is %d",sum);
	
	return 0;
}