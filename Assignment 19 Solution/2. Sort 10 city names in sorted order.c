#include<stdio.h>
#include<string.h>

int main()
{
	char str[10][30],s[30];
	int i,pass,r;
	printf("\nEnter 10 City Names : ");
	for(i=0; i<10; i++)
	{
		gets(str[i]);
	}
	
	for(pass=0; pass<10-1; pass++)
	{
		for(i=0; i<10-1-pass; i++)
		{
			r = strcmp(str[i],str[i+1]);
			
			if(r>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],s);
			}
		}
	}
	
	printf("\n10 City Names In Sorted Order...\n\n");
	for(i=0; i<10; i++)
	{
		puts(str[i]);
	}
}
