#include <stdio.h>

int main(void) {

       int mark_1;

              printf("enter mark 1");

              scanf("%d", &mark_1);

       int mark_2;

              printf("enter mark 2");

              scanf("%d", &mark_2);

       int total;

              total = mark_1 + mark_2;

              printf("Total marks %d",total);

       int average;

              average = total/2;

              printf("\nAverage %d",average);

return 0;

}