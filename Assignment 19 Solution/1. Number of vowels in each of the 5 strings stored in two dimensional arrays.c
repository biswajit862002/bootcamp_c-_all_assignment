#include<stdio.h>

int main()
{
	char str[5][20];
	int i,j,vowel=0;
	printf("\nEnter 5 strings : ");
	for(i=0; i<5; i++)
	{
		gets(str[i]);
	}
	
	for(i=0; i<5; i++)
	{	
		vowel = 0;
		for(j=0; str[i][j]; j++)
		{
			if(str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' ||
		   	   str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U' )
			{
			   	vowel++;
			}
		}
		printf("\nNumber of vowel in %d row = %d times",i+1,vowel);						
	}
	return(0);
}
