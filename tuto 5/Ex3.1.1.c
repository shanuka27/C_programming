#include<stdio.h>

int main()
{
	int module1,module2,module3,module4,sum,stdno=1,count=1,Htotal=0;
	
	while(count<=3&&stdno<=3)
	{
		printf("\nstudent no:%d", stdno);
		printf("\nEnter module1 marks :");
		scanf("%d", &module1);
		printf("\nEnter module2 marks :");
		scanf("%d", &module2);
		printf("\nEnter module3 marks :");
		scanf("%d", &module3);
		printf("\nEnter module4 marks :");
		scanf("%d", &module4);
		
		sum = module1 + module2 + module3 + module4;
		
		printf("\nTotal module marks is %d",sum);
		count++;
		stdno++;
		
		if(sum>Htotal)
		
		Htotal = sum;
    }
    
    printf("\nHighest total is %d", Htotal);
    printf("\nHighest total stdno is %d",stdno);
	return 0;
}