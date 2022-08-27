#include<stdio.h>

int main()
{
	int i,n,item;
	
	printf("\nEnter Size of Array : ");
	scanf("%d",&n);
	
	int arr[n]; // Declaring an array
	
	printf("\nEnter %d Elements Are :-\n\n",n);
	for(i=0; i<n; i++)
	{
		printf("Enter Element Of Pocket [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	item = duplicate_element(arr,n);
	if(item != 0)
	{
		printf("\nFirst Occurrance Of Adjacent Duplicate Value is : %d",item);
	}
	else
	{
		printf("\nNot Adjacent Element Are Here");
	}
	return(0);
}

int duplicate_element(int arr[],int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(arr[i] == arr[i+1])
		{
			return(arr[i]);
		}
	}
	return(0);
}
