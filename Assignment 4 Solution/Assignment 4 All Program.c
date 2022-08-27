							//Assignnment 4 All Solution

#include<stdio.h>
#include<stdlib.h>

void print()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\nMy Name Is Biswajit Dey");
	}
}

void natural_number()
{
	int i;
	printf("\nFirst 10 Natural Number are : ");
	for(i=1;i<=10;i++)
	{
		printf("%d ",i);
	}
}

void natural_number_reverse()
{
	int i;
	printf("\nFirst 10 Natural Number in Reverse Order are : ");
	for(i=10;i>=1;i--)
	{
		printf("%d ",i);
	}
}

void odd_natural_number()
{
	int i;
	printf("\nFirst 10 Odd Natural Number are : ");
	for(i=1;i<20;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}

void odd_natural_number_reverse()
{
	int i;
	printf("\nFirst 10 Odd Natural Number are : ");
	for(i=20;i>=1;i--)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}

void even_natural_number()
{
	int i;
	printf("\nFirst 10 Odd Natural Number are : ");
	for(i=1;i<20;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}

void even_natural_number_reverse()
{
	int i;
	printf("\nFirst 10 Even Natural Number are : ");
	for(i=19;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}

void squares_natural_numbers()
{
	int i;
	printf("\nSquares of First 10 Natural Number are : ");
	for(i=1;i<=10;i++)
	{
		printf("\n%d = %d",i,i*i);
	}
}

void cubes_natural_numbers()
{
	int i;
	printf("\nSquares of First 10 Natural Number are : ");
	for(i=1;i<=10;i++)
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
	
	printf("\n1. print My Name\n");
	printf("\n2. print First 10 Natural Number\n");
	printf("\n3. print First 10 Natural Number in Reverse order\n");
	printf("\n4. print First 10 Odd Natural Number\n");
	printf("\n5. print First 10 Odd Natural Number in Reverse order\n");
	printf("\n6. print First 10 Even Natural Number\n");
	printf("\n7. print First 10 Even Natural Number in Reverse Order\n");
	printf("\n8. print Squeares of The First 10 Natural Numbers\n");
	printf("\n9. print Cubes of The First 10 Natural Numbers\n");
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

