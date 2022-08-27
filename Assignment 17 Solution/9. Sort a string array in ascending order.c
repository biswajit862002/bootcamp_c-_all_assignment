#include<stdio.h>
#include<string.h>

int main()
{
	char str[5][30],s[30];
	int i,pass,r;
	
	
	printf("\nEnter 5 Names : ");
	for(i=0; i<5; i++)
	{
		gets(str[i]);
	}
	
	for(pass=0; pass<5-1; pass++)
	{
		for(i=0; i<5-1-pass; i++)
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
	
	printf("\nString In Dictionary Order\n\n");
	for(i=0; i<5; i++)
	{
		puts(str[i]);
	}
	
	return(0);
}
