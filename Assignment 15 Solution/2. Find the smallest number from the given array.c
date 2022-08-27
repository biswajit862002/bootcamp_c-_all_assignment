#include<stdio.h>

int main()
{
	int a[1000],i,n,small;
	
	printf("\nEnter How Many Number You Want To Stored An Array [1-1000]: ");
	scanf("%d",&n);
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	small = smallest_number(a,n);
	printf("\nSmallest Number Of An Array Is : %d",small);
}

int smallest_number(int a[],int n)
{
	int i,small;
	small = a[0];
	for(i=1; i<n; i++)
	{
		if(a[i] < small)
		{
			small = a[i];
		}
	}
	return(small);
}
