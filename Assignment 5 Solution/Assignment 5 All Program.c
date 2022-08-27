							//Assignnment 5 All Solution

#include<stdio.h>
#include<stdlib.h>

void print()
{
	int i,n;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nMy Name Is Biswajit Dey");
	}
}

void natural_number()
{
	int i,n;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	printf("\nFirst %d Natural Number are : ",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
}

void natural_number_reverse()
{
	int i,n;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	printf("\nFirst %d Natural Number in Reverse Order are : ",n);
	for(i=n;i>=1;i--)
	{
		printf("%d ",i);
	}
}

void odd_natural_number()
{
	int i,n,count;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	i=1;
	count=0;
	printf("\nFirst %d Odd Natural Number are : ",n);
	while(count != n)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			count++;
		}
		i++;
	}
}

void odd_natural_number_reverse()
{
	int i,n;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	printf("\nFirst %d Odd Natural Number are : ",n);
	for(i=2*n;i>=1;i--)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}

void even_natural_number()
{
	int i,n,count;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	i=1;
	count=0;
	printf("\nFirst %d Even Natural Number are : ",n);
	while(count != n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			count++;
		}
		i++;
	}
}

void even_natural_number_reverse()
{
	int i,n;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	printf("\nFirst %d Even Natural Number are : ",n);
	for(i=2*n;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}

void squares_natural_numbers()
{
	int i,n;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	printf("\nSquares of First %d Natural Number are : ",n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d = %d",i,i*i);
	}
}

void cubes_natural_numbers()
{
	int i,n;
	printf("\nEnter a Natural Number  : ");
	scanf("%d",&n);
	
	printf("\nSquares of First %d Natural Number are : ",n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d = %d",i,i*i*i);
	}
}

void table_print()
{
	int i,n;
	printf("\nEnter Any Number : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,(n*i));
	}
}

int menu()
{
	int ch;
	
	printf("\n1. print My Name N Times\n");
	printf("\n2. print First N Natural Number\n");
	printf("\n3. print First N Natural Number in Reverse order\n");
	printf("\n4. print First N Odd Natural Number\n");
	printf("\n5. print First N Odd Natural Number in Reverse order\n");
	printf("\n6. print First N Even Natural Number\n");
	printf("\n7. print First N Even Natural Number in Reverse Order\n");
	printf("\n8. print Squeares of The First N Natural Numbers\n");
	printf("\n9. print Cubes of The First N Natural Numbers\n");
	printf("\n10. print Table Any Number\n");
	printf("\n11. Exit Program\n");
	
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
			case 1 :	print();
						break;
						
			case 2 :	natural_number();
						break;
						
			case 3 :	natural_number_reverse();	
						break;
						
			case 4 :	odd_natural_number();	
						break;
						
			case 5 :	odd_natural_number_reverse();	
						break;
						
			case 6 :	even_natural_number();	
						break;
						
			case 7 :	even_natural_number_reverse();	
						break;
						
			case 8 :	squares_natural_numbers();	
						break;
						
			case 9 :	cubes_natural_numbers();	
						break;
						
			case 10 :	table_print();
						break;	
						
			case 11 :	exit(0);	
						
			default :	printf("\nInvalid Choice...\n");																																
		}
		getch();
	}
	return(0);
}

