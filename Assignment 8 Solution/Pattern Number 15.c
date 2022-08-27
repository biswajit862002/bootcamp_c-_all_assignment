#include<stdio.h>

int main()
{
	int i,j,n;
	printf("\nEnter Number Of Rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n || j==n || j==n+1-i)
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
