#include<stdio.h>

int main()
{
	char str[50];
	int i,c,count;
	printf("\nEnter Any String : ");
	//gets(str);
	fgets(str,50,stdin);
	
	for(c='a'; c<='z'; c++)
	{
		count = 0;
		for(i=0; str[i] != '\0'; i++)
		{
			if(c == str[i])
			{
				count++;
			}
		}
		if(count != 0)
		{
			printf("\n%c Found %d Times",c,count);
		}
	}
	return(0);
}
