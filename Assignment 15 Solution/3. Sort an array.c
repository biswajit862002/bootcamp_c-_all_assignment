#include<stdio.h>

void sort(int a[],int n);
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
	
	printf("\nBefore Sorted Element Are : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	sort(a,n);
	
	printf("\nAfter Sorted Element Are : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	return(0);
}

void sort(int a[],int n)
{
	int pass,i,temp;
	for(pass=0; pass<n-1; pass++)
	{
		for(i=0; i<n-1-pass; i++)
		{
			if(a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}	
}

