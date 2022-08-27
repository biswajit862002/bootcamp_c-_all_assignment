#include<stdio.h>

void array_rotation(int arr[],int a,int size);
int main()
{
	int a,i,n;
	printf("\nEnter Size of Array : ");
	scanf("%d",&n);
	
	int arr[n]; // Declaring an array
	
	printf("\nEnter %d Elements Are :-\n\n",n);
	for(i=0; i<n; i++)
	{
		printf("Enter Element Of Pocket [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter How Many Rotation You Want : ");
	scanf("%d",&a);
	array_rotation(arr,a,n);
	
	return(0);
}

void array_rotation(int arr[],int a,int size)
{
	int i,temp;
	while(a!=0)
	{
		temp = arr[size-1];
		for(i=size-1; i>0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = temp;
		a--;
	}
	printf("\nModify Array : ");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
}
