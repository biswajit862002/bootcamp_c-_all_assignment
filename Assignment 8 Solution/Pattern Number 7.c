#include<stdio.h>

int main()
{
	int i,j,n;
	printf("\nEnter Number Of Rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if( (j<=n+i && j<=2*n ))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
