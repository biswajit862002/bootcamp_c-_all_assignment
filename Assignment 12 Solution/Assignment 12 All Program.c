				// Assignment 12 All Program

#include<stdio.h>
#include<stdlib.h>

// Recursive Function to Print First N natural Numbers

void natural_number(int n)
{
	if(n >= 1)
	{
		natural_number(n-1);
		printf("%d ",n);
	}	
}

// Recursive Function to Print First N natural Numbers in Reverse Order

void natural_number_reverse_order(int n)
{
	if(n >= 1)
	{
		printf("%d ",n);
		natural_number_reverse_order(n-1);
	}	
}

// Recursive Function to Print First N  Odd natural Numbers

void odd_natural_number(int n)
{
	if(n >= 1)
	{
		odd_natural_number(n-1);
		printf("%d ",2*n-1);
	}	
}

// Recursive Function to Print First N  Odd natural Numbers in Reverse Order

void odd_natural_number_reverse_order(int n)
{
	if(n >= 1)
	{
		printf("%d ",2*n-1);
		odd_natural_number_reverse_order(n-1);
	}	
}

// Recursive Function to Print First N  even natural Numbers

void even_natural_number(int n)
{
	if(n >= 1)
	{
		even_natural_number(n-1);
		printf("%d ",2*n);
	}	
}

// Recursive Function to Print First N  even natural Numbers in Reverse Order

void even_natural_number_reverse_order(int n)
{
	if(n >= 1)
	{
		printf("%d ",2*n);
		even_natural_number_reverse_order(n-1);
	}	
}

// Recursive Function to Print squears of First N natural Numbers

void squares(int n)
{
	if(n >= 1)
	{
		squares(n-1);
		printf("%d ",n*n);
	}
}

// Recursive Function to Print Binary of a Givn Decimal Number

void decimal_to_binary(int n)
{
	if(n == 1)
	{
		printf("1");
	}
	else
	{
		decimal_to_binary(n/2);
		printf("%d",n % 2);
	}
}

// Recursive Function to Print Octal of a Givn Decimal Number

void decimal_to_octal(int n)
{
	if(n >= 1)
	{
		decimal_to_octal(n/8);
		printf("%d",n % 8);
	}
}

// Recursive Function to Print Reverse of  Givn Number

void reverse_order(int n)
{
	if(n>0)
	{
		printf("%d",n%10);
		reverse_order(n/10);
	}
}



int menu()
{
	int ch;
	
	printf("\n1. Recursive Function to Print First N natural Numbers");
	printf("\n2. Recursive Function to Print First N natural Numbers in Reverse Order");
	printf("\n3. Recursive Function to Print First N Odd natural Numbers");
	printf("\n4. Recursive Function to Print First N Odd natural Numbers in Reverse Order");
	printf("\n5. Recursive Function to Print First N even natural Numbers");
	printf("\n6. Recursive Function to Print First N even natural Numbers in Reverse Order");
	printf("\n7. Recursive Function to Print squears of First N natural Numbers");
	printf("\n8. Recursive Function to Print Binary of a Givn Decimal Number");
	printf("\n9. Recursive Function to Print Octal of a Givn Decimal Number");
	printf("\n10. Recursive Function to Print Reverse of  Givn Number");
	printf("\n11. Exit Program");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	int a;
	
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFirst N natural Numbers are : ");
						natural_number(a);
						break;
						
			case 2 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFirst N natural Numbers in Reverse Order : ");
						natural_number_reverse_order(a);
						break;		
						
			case 3 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFirst N natural Odd Numbers are : ");
						odd_natural_number(a);
						break;
						
						
			case 4 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFirst N natural Odd Numbers in Reverse Order : ");
						odd_natural_number_reverse_order(a);
						break;			
							
			case 5 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFirst N natural Even Numbers are : ");
						even_natural_number(a);
						break;
						
			case 6 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFirst N natural Even Numbers in Reverse Order : ");
						even_natural_number_reverse_order(a);
						break;
						
			case 7 :	printf("\nEnter a Number : ");
						scanf("%d",&a);	
						printf("\nPrint squears of First N natural Numbers are : ");
						squares(a);
						break;
						
			case 8 :	printf("\nEnter a Decimal Number : ");
						scanf("%d",&a);	
						printf("\nPrint Binary of a Givn Decimal Number %d = ",a);
						decimal_to_binary(a);
						break;
						
			case 9 :	printf("\nEnter a Decimal Number : ");
						scanf("%d",&a);	
						printf("\nPrint Octal of a Givn Decimal Number %d = ",a);
						decimal_to_octal(a);
						break;
						
			case 10 :	printf("\nEnter a Number : ");
						scanf("%d",&a);	
						printf("\nPrint Reverse of  Givn Number : ");
						reverse_order(a);
						break;						
						
			case 11 : 	exit(0);
			
			default :	printf("\nInvalid Choice...\n");																			
		}
		getch();
	}
	return(0);
}

