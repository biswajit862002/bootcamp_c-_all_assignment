					// Assignment 2 All Solution

#include<stdio.h>
#include<stdlib.h>

void unit_digit()
{
	int n,r;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	r = n % 10;
	printf("\nUnit Digit of %d is = %d",n,r);
}

void without_last_digit()
{
	int n,r;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	r = n / 10;
	printf("\nWithout Last Digit of %d is : %d",n,r);
}

void swap()
{
	int a,b,temp=0;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	
	printf("\nBefore Swaping Of Two Number...\n");
	printf("\nFirst Number is : %d",a);
	printf("\nSecond Number is : %d",b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\n\nAfter Swaping Of Two Number...\n");
	printf("\nFirst Number is : %d",a);
	printf("\nSecond Number is : %d",b);	
}

void swap_without_third_variable()
{
	int a,b;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter First Number : ");
	scanf("%d",&b);
	
	printf("\nBefore Swaping Of Two Number...\n");
	printf("\nFirst Number is : %d",a);
	printf("\nSecond Number is : %d",b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\n\nAfter Swaping Of Two Number...\n");
	printf("\nFirst Number is : %d",a);
	printf("\nSecond Number is : %d",b);
}

void sum_digit()
{
	int n,r,sum = 0,temp;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	temp = n;
	while(n != 0)
	{
		r = n%10;
		sum = sum+r;
		n = n/10;
	}
	printf("\nSum Of %d = %d",temp,sum);
}

int ascci()
{
	char ch = 'r';
//	printf("\nEnter any Symbol : ");
//	scanf("%c",&ch);
	printf("\nAscii Code : %d",ch);
}

void even_odd_bitwise()
{
	int n;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	if((n&1) == 0)
	{
		printf("\n%d is an Even Number",n);
	}
	else
	{
		printf("\n%d is an Odd Number",n);
	}
}

void size_variable()
{
	printf("\nSize of int : %d",sizeof(int));
	printf("\nSize of float : %d",sizeof(float));
	printf("\nSize of char : %d",sizeof(char));
	printf("\nSize of double : %d",sizeof(double));
}

void last_digit_zero()
{
	int n,r;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	printf("\nOriginal Number is : %d",n);
	r = n/10;
	r = r*10;
	printf("\n\nLast Digit of a Number Stored an Variable as zero...\n");
	printf("\nModify Number is : %d",r);
}

void number_digit()
{
	int n,d,r,sum = 0;
	printf("\nEnter Any Number : ");
	scanf("%d",&n);
	printf("\nEnter A Digit : ");
	scanf("%d",&d);
	
	r = n*10;
	sum = r+d;
	
	printf("\nResulting Number is : %d",sum);
}

void usd_inr()
{
	int INR;
	double USD;
	printf("\nEnter Amount in INR : ");
	scanf("%d",&INR);
	
	USD = INR/76.23;
	
	printf("\nINR of %d = USD of %f",INR,USD);	
}

void rotate_number()
{
	int n,q,r,sum =0;
	printf("\nEnter Any Three Digit Number : ");
	scanf("%d",&n);
	
	if(n>99 && n<1000)
	{
		printf("\nOriginal Number : %d",n);
		q = n/10;
		r = n%10;
		sum = r*100+q;
	
		printf("\nRotate the Digit by First Position : %d",sum);
	}
	else
	{
		printf("\nPlease Enter Three Digit Number...\n");
	}	
}

int menu()
{
	int ch;
	printf("\n1. w.a.p to Print Unit Digit Of a NUmber");
	printf("\n2. w.a.p to Print a NUmber Without its Last Digit");
	printf("\n3. w.a.p to Swap to Values");
	printf("\n4. w.a.p to Swap to Values Without Using a Third Variable");
	printf("\n5. w.a.p to Sum of digits");
	printf("\n6. Display ASCII Code");
	printf("\n8. w.a.p to Check Number is Even Or Odd Using Bitwise Operator");
	printf("\n9. w.a.p Using Sizeof Operator");
	printf("\n10. w.a.p to Make The Last Digit Number Stored in a Variable as Zero");
	printf("\n11. w.a.p to Append a Digit of a Given Number");
	printf("\n12. w.a.p to To Convert INR to USD");
	printf("\n13. w.a.p to Rotate a Digit By First Position Of Number");
	printf("\n14. EXIT PROGRAM");
	
	printf("\n\nEnter Your choice : ");
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
			case 1 :	unit_digit();
						break;
						
			case 2 :	without_last_digit();
						break;
						
			case 3 :	swap();
						break;
						
			case 4 :	swap_without_third_variable();
						break;
						
			case 5 :	sum_digit();
						break;
						
			case 6 :	ascci();
						break;
						
			case 8 :	even_odd_bitwise();
						break;
						
			case 9 :	size_variable();
						break;
						
			case 10 :	last_digit_zero();
						break;
						
			case 11 :	number_digit();
						break;
						
			case 12 :	usd_inr();
						break;
						
			case 13 :	rotate_number();
						break;
						
			case 14 :	exit(0);
			
			default :	printf("\nInvalid Choice...\n");																																							
		}
		getch();
	}
	return(0);
}

