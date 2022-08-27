#include<stdio.h>

int main()
{
	int a[10],freq[100]={0};
	int i;
	printf("\nEnter 10 values : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++)
	{
		freq[a[i]]++;
	}
	printf("\nFrequency of each element :-\n\n");
	for(i=0; i<100; i++)
	{
		if(freq[i] != 0)
		{
			printf("\n%d Founds %d Times",i,freq[i]);
		}
	}
	return(0);	
}
