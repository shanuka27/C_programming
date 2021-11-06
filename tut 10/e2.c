#include <stdio.h>
#include <string.h>
#define size 5

int main(void) {

  int i;
  int appType[3] = {0};
  char type[10];
  char name[30];

  FILE *cfPtr; 
 
  cfPtr = fopen("appointment.dat", "w+"); 
  
  if (cfPtr == NULL)
  {   
    printf("File cannot be open");
    return -1;
  }

  for(i = 1; i <= 5; i++)
   {
		//get user input
    printf("Enter patient %d name : ", i);
    scanf("%s", name);
    printf("Enter type of appointment (C/S/T): ");
    scanf("%s", type);

    fprintf(cfPtr, "%s %s\n", name, type); //write to file
  }

  puts("");
  fclose(cfPtr); //closeopened file

  cfPtr = fopen("appointment.dat", "r+"); 
  
	for(i = 1; i <= size; i++) 
	{
    fscanf(cfPtr, "%s %s\n", name, type);  //read from file
    printf ("%s %s \n", name, type);  
    puts("");

    if (type[0] == 'C' || type[0] == 'c')
	{
      appType[0] = appType[0] + 1;
    }
    else if (type[0] == 'S' || type[0] == 's')
	{
      appType[1] = appType[1] + 1;
    }
    else if (type[0] == 'T' || type[0] == 't')
	{
      appType[2] = appType[2] + 1;
    }
  }

  fclose(cfPtr); //close file

  printf("Appointment Type\t\tNumber of Patients\n");
  printf("Consulting\t\t%20d\n",appType[0]);
  printf("Scanning\t\t%20d\n",appType[1]);
  printf("Testing\t\t\t%20d\n",appType[2]);

return 0;
}