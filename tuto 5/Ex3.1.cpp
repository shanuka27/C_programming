#include<stdio.h>

int main()
{
	int module1,module2,module3,module4,sum=0;
	
	{
		printf("Enter module1 marks :%d");
		scanf("%d", &module1);
		printf("\nEnter module2 marks :%d");
		scanf("%d", &module2);
		printf("\nEnter module3 marks :%d");
		scanf("%d", &module3);
		printf("\nEnter module4 marks :%d");
		scanf("%d", &module4);
		
		sum = module1 + module2 + module3 + module4;
		printf("\nTotal module marks is %d",sum);
	}
	return 0;
}