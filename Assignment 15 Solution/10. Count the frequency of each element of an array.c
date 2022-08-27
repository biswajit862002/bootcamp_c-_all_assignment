 #include<stdio.h>

int main()
{
	int a[1000],b[1000],i,j,n,count;
	
	printf("\nEnter How Many Number You Want To Stored An Array [1-1000]: ");
	scanf("%d",&n);
	printf("\nEnter %d Elements In Array :-\n\n",n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Number in Pocket [%d] : ",i);
		scanf("%d",&a[i]);
		b[i] = -1;	// store unique element in b array
	}
	
	for(i=0; i<n; i++)
	{
		count = 1;
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				count++;
				b[j] = 0;
			}
		}
		if(b[i] != 0)
		{
			b[i] = count;
		}
	}
	printf("\nCount of array elements are : \n");
	for(i=0; i<n; i++)
	{
		if(b[i] != 0)
		{
			printf("\n%d found %d times in array\n",a[i],b[i]);
		}
	}
	return(0);
}
