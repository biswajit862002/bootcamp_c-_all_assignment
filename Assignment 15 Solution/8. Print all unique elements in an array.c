#include<stdio.h>

void unique(int a[],int n);
int main()
{
	int a[1000],i,n;
	
	printf("\nEnter How Many Number You Want To Stored An Array [1-1000]: ");
	scanf("%d",&n);
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	unique(a,n);
	return(0);
}

void unique(int a[],int n)
{
	int i,j,count;
	printf("\nAll Unique Elements Are : ");
	for(i=0; i<n; i++)
	{
		count=0;
		for(j=0; j<n; j++)
		{
			if(a[i] == a[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d ",a[i]);
		}
	}
}
