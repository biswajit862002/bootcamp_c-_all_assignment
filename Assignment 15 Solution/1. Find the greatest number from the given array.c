#include<stdio.h>

int main()
{
	int a[1000],i,n,great;
	
	printf("\nEnter How Many Number You Want To Stored An Array [1-1000]: ");
	scanf("%d",&n);
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	great = greatest_number(a,n);
	printf("\nGreatest Number Of An Array Is : %d",great);
}

int greatest_number(int a[],int n)
{
	int i,great;
	great = a[0];
	for(i=1; i<n; i++)
	{
		if(a[i] > great)
		{
			great = a[i];
		}
	}
	return(great);
}
