				// Assignment 14 All Program

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void sum_10_numbers()
{
	int num[10],sum,i;
	
	printf("\nEnter 10 Numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0,sum=0; i<10; i++)
	{
		sum = sum + num[i];
	}
	printf("\nSum of 10 Numbers are : %d",sum);
}

void avg_10_numbers()
{
	int a[10],i,sum;
	float avg;
	
	printf("\nEnter 10 Numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,sum=0; i<10; i++)
	{
		sum = sum + a[i];
	}
	avg = sum / 10.0;
	
	printf("\nCalculate The Average Of 10 Numbers : %f",avg);
}

void sum_of_all_even_odd()
{
	int num[10],sum_even=0,sum_odd=0,i;
	
	printf("\nEnter 10 Numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<10; i++)
	{
		if(num[i] % 2 == 0)
		{
			sum_even = sum_even + num[i];
		}
		else
		{
			sum_odd = sum_odd + num[i];
		}
	}
	printf("\nSum of All Even Numbers = %d",sum_even);
	printf("\nSum of All Odd Numbers = %d",sum_odd);
}

void greatest_number()
{
	int num[10],great,i;
	
	printf("\nEnter 10 Numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	great = num[0];
	for(i=1; i<10; i++)
	{
		if(num[i] > great)
		{
			great = num[i];
		}
	}
	printf("\nGreatest Number Is : %d",great);
}

void smallest_number()
{
	int num[10],small,i;
	
	printf("\nEnter 10 Numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	small = num[0];
	for(i=1; i<10; i++)
	{
		if(num[i] < small)
		{
			small = num[i];
		}
	}
	printf("\nSmallest Number Is : %d",small);
}

void sort()
{
	int num[10],i,pass,temp;
	
	printf("\nEnter 10 Numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nBefore Sorted Array : ");
	for(i=0; i<10; i++)
	{
		printf("%d ",num[i]);
	}
	
	for(pass=0; pass<9; pass++)
	{
		for(i=0; i<9-pass; i++)
		{
			if(num[i] > num[i+1])
			{
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
			}
		}
	}
	
	printf("\nAfter Sorted Array : ");
	for(i=0; i<10; i++)
	{
		printf("%d ",num[i]);
	}
}

void second_largest()
{
	int a[1000],n,i,l,s;
	printf("\nEnter How many Numbers You Want To Stored An Array [1-1000] : ");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	l=s=INT_MIN;	// -2147483648
	for(i=0; i<n; i++)
	{
		if(a[i] > l)
		{
			s = l;
			l = a[i];
		}
		else if(a[i] > s && a[i] != l)
		{
			s = a[i];
		}
	}
	if(s == INT_MIN)
	{
		printf("\nThere is no second largest element");	
	}		
	else
	{
		printf("\nSecond Largest Element Is : %d",s);
	}	
}

void second_smallest()
{
	int a[1000],n,i,l,s;
	printf("\nEnter How many Numbers You Want To Stored An Array [1-1000] : ");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	l=s=INT_MAX;	// +2147483648
	for(i=0; i<n; i++)
	{
		if(a[i] < l)
		{
			s = l;
			l = a[i];
		}
		else if(a[i] < s && a[i] != l)
		{
			s = a[i];
		}
	}
	if(s == INT_MAX)
	{
		printf("\nThere is no second smallest element");	
	}		
	else
	{
		printf("\nSecond Smallest Element Is : %d",s);
	}		
}

void display_value_reverse_order()
{
	int a[1000],i,n;
	printf("\nHow Many Number You Want To Stored An Array [1-1000] : ");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nReverse Order In An Array : ");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}

void copy_array()
{
	int a[1000],b[1000],i,n;
	printf("\nHow Many Number You Want To Stored An Array [1-1000] : ");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
	}
	printf("\nCopy The Elements Of One Array Into Another Array : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
}

int menu()
{
	int ch;
	printf("\n1. Calculate The Sum of numbers");
	printf("\n2. Calculate The Average of numbers");
	printf("\n3. Calculate The Sum of All Even & odd numbers");
	printf("\n4. Find The greatest Number In The Array");
	printf("\n5. Find The Smallest Number In The Array");
	printf("\n6. Sort Elements of An Array");
	printf("\n7. Find The Second largest Number In an Array");
	printf("\n8. Find The Second Smallest Number In An Array");
	printf("\n9. Read N Number of Values & display it in Reverse Order");
	printf("\n10. Copy The Elements Of One Array Into Another Array");
	printf("\n11. Exit Program");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1 :	sum_10_numbers();
						break;
						
			case 2 :	avg_10_numbers();
						break;
						
			case 3 :	sum_of_all_even_odd();
						break;
						
			case 4 :	greatest_number();
						break;
						
			case 5 :	smallest_number();
						break;
						
			case 6 :	sort();
						break;
			
			case 7 :	second_largest();
						break;
						
			case 8 :	second_smallest();
						break;
						
			case 9 :	display_value_reverse_order();
						break;
						
			case 10 :	copy_array();
						break;
						
			case 11 :	exit(0);
								
			default :	printf("\nInvalid Choice...\n");																															
		}
		getch();
	}
	return(0);
}

