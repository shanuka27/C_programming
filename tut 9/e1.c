#include<stdio.h>
#include<string.h>
int main()
{
	int x,size;
	char word[100];
	
	printf("Enter word :");
	scanf("%s", word);
	
	size = strlen(word);
	size = size -1;
	
	for(x = 0; x < size; x++)
	{
		if( word[x] != word[size])
		{
			printf("%s is not palindrome", word);
			return 0;
		}
	    size--;	
	}
	printf("%s is palindrome", word);
	return 0;
}