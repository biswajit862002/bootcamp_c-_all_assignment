						// Assignment 3 All Solution

#include<stdio.h>
#include<stdlib.h>

void check_positive()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n%d is a Positive Number...\n",n);
	}
	if(n<=0)
	{
		printf("\n%d is a Non-Positive Number...\n",n);
	}
}

void divisible_by_5()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	if(n % 5 == 0)
	{
		printf("\nYes %d is Divisible By 5",n);
	}
	else
	{
		printf("\nNo %d is Not Divisible By 5",n);
	}
}

void even_odd()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	if(n % 2 == 0)
	{
		printf("\n%d is an Even Number",n);
	}
	else
	{
		printf("\n%d is an Odd Number",n);
	}
}

void even_odd_without_modulo()
{
	int n;
	printf("\nEnter a Number : ");
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

void three_digit()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	if(n>99 && n<1000)
	{
		printf("\nYes %d is a Three Digit Number",n);
	}
	else
	{
		printf("\nNo %d is Not a Three Digit Number",n);
	}
}

void greater_two_number()
{
	int a,b;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\n%d is a greater Number",a);
	}
	else if(b>a)
	{
		printf("\n%d is a greater Number",b);
	}
	else
	{
		printf("\nBoth are The Same %d",a);
	}
}

void leap_year()
{
	int n;
	printf("\nEnter any Year : ");
	scanf("%d",&n);
	
	if(n%4 == 0 || n%400 == 0)
	{
		printf("\n%d is a Leap Year",n);
	}
	else
	{
		printf("\n%d is Non Leap Year",n);
	}
}

void greater_three_number()
{
	int a,b,c;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	printf("\nEnter Third Number : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nGreater Number is %d",a);
		}
		else
		{
			printf("\nGreater Number is %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nGreater Number is %d",b);
		}
		else
		{
			printf("\nGreater Number is %d",c);
		}
	}
}

void cost_selling()
{
	int c,s,profit;
	double per;
	printf("\nEnter Cost Price : ");
	scanf("%d",&c);
	printf("\nEnter Selling Price : ");
	scanf("%d",&s);
	
	profit = s - c;
	
	if(profit>0)
	{
		per = (s-c)*100/c;
		printf("\nProfit Percentage : %f",per);
	}
	else if(profit<0)
	{
		per = (s-c)*100/c;
		printf("\nLoss Percentage : %f",per);
	}
	else
	{
		printf("\nNo Profit No Loss");
	}	
}

void marks()
{
	int mark1,mark2,mark3,mark4,mark5;
	printf("\nEnter 1st Subject marks : ");
	scanf("%d",&mark1);
	printf("\nEnter 2nd Subject marks : ");
	scanf("%d",&mark2);
	printf("\nEnter 3rd Subject marks : ");
	scanf("%d",&mark3);
	printf("\nEnter 4th Subject marks : ");
	scanf("%d",&mark4);
	printf("\nEnter 5th Subject marks : ");
	scanf("%d",&mark5);
	
	if( (mark1>=33 && mark1<100) && (mark2>=33 && mark2<100) && (mark3>=33 && mark3<100) && (mark4>=33 && mark4<100) && (mark5>=33 && mark5<100) )
	{
		printf("\nYou are Passes");
	}
	else
	{
		printf("\nYou are Failed");
	}
}

void Upper_lower_case()
{
	char ch = 'G';
//	printf("\nEnter any Alphabet : ");
//	scanf("%c",&ch);
	
	if( (ch>='a' && ch<='z') )
	{
		printf("\n%c is a Lower Case Letter",ch);
	}
	else if( (ch>='A' && ch<='Z') )
	{
		printf("\n%c is a Upper Case Letter",ch);
	}
}

void divisible_by_3and2()
{
	int n;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	
	if(n%3 == 0 && n%2 == 0)
	{
		printf("\n%d is Divisible By 3 and 2",n);
	}
	else
	{
		printf("\n%d is Not Divisible By 3 and 2",n);
	}
}

void divisible_by_7or3()
{
	int n;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	
	if(n%7 == 0 || n%3 == 0)
	{
		printf("\n%d is Divisible By 7 or 3",n);
	}
	else
	{
		printf("\n%d is Not Divisible By 7 or 3",n);
	}
}

void check_positive_negetive_zero()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n%d is a Positive Number...\n",n);
	}
	else if(n<0)
	{
		printf("\n%d is a Negative Number...\n",n);
	}
	else
	{
		printf("\nIt is a Zero");
	}
}

void Upper_lower_digit_special()
{
	char ch = 'o';
//	printf("\nEnter any Alphabet : ");
//	scanf("%c",&ch);
	
	if( (ch>='a' && ch<='z') )
	{
		printf("\n%c is a Lower Case Letter",ch);
	}
	else if( (ch>='A' && ch<='Z') )
	{
		printf("\n%c is a Upper Case Letter",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n%c is a Digit",ch);
	}
	else
	{
		printf("\nSpecial Character...");
	}
}

void triangle_valid()
{
	int a,b,c;
	printf("\nEnter Triangle Side Of A : ");
	scanf("%d",&a);
	printf("\nEnter Triangle Side Of B : ");
	scanf("%d",&b);
	printf("\nEnter Triangle Side Of C : ");
	scanf("%d",&c);
	
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("\nTriangle is a Valid");
	}
	else
	{
		printf("\nTriangle is Not a Valid");
	}
}

void Number_of_month()
{
	int n;
	printf("\nEnter a Number Between 1 To 12 : ");
	scanf("%d",&n);
	
	if(n>=1 && n<=12)
	{
		if(n==1)
		{
			printf("\nJANUARY : 31 Days");
		}
		else if(n==2)
		{
			printf("\nFEBRUARY : 28/29 Days");
		}
		else if(n==3)
		{
			printf("\nMARCH : 31 Days");
		}
		else if(n==4)
		{
			printf("\nAPRIL : 30 Days");
		}
		else if(n==5)
		{
			printf("\nMAY : 31 Days");
		}
		else if(n==6)
		{
			printf("\nJUNE : 30 Days");
		}
	    else if(n==7)
		{
			printf("\nJULY : 31 Days");
		}
		else if(n==8)
		{
			printf("\nAUGUST : 31 Days");
		}
		else if(n==9)
		{
			printf("\nSEPTEMBER : 30 Days");
		}
		else if(n==10)
		{
			printf("\nOCTOBER : 31 Days");
		}
		else if(n==11)
		{
			printf("\nNOVEMBER : 30 Days");
		}
		else if(n==12)
		{
			printf("\nDECEMBER : 31 Days");
		}
	}
	else
	{
		printf("\nPlease Enter The Number 1 To 12");
	}
}

int menu()
{
	int ch;
	
	printf("\n1. w.a.p To Check Number is Positiv Or Non Positive");
	printf("\n2. w.a.p To Check Number is Divisible By 5 or Not");
	printf("\n3. w.a.p To Check Number is Even or Odd");
	printf("\n4. w.a.p To Check Number is Even or Odd Without Using % Operator");
	printf("\n5. w.a.p To Check Number is Three Digit Or Not");
	printf("\n6. w.a.p To Check Greater Between Two Number");
	printf("\n7. w.a.p To Check Whether Roots Of a Given Quadratic Equation");
	printf("\n8. w.a.p To Check Year is Leap Year Or Not");
	printf("\n9. w.a.p To Check Greater Between Three Number");
	printf("\n10. w.a.p To Check Profit Or Loss Percentage");
	printf("\n11. w.a.p To Check Candidate is Passed Or Failed");
	printf("\n12. w.a.p To Check Alphabet is Upper Case Or Lower Case");
	printf("\n13. w.a.p To Check Number is Divisible By 3 and 2");
	printf("\n14. w.a.p To Check Number is Divisible By 7 or 3");
	printf("\n15. w.a.p To Check Number is Positiv Negetive Or Zero");
	printf("\n16. w.a.p To Check Alphabet is Upper Case Lower Case Digit Or Special");
	printf("\n17. w.a.p To Check Triangle is Valid Or Not");
	printf("\n18. w.a.p Take The Month Number & Display Number of days In Month");
	printf("\n19. EXIT PROGRAM");
	
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
			case 1 :	check_positive();
						break;
						
			case 2 :	divisible_by_5();
						break;	
						
			case 3 :	even_odd();
						break;
						
			case 4 :	even_odd_without_modulo();
						break;	
						
			case 5 :	three_digit();
						break;
						
			case 6 :	greater_two_number();
						break;	
						
			case 7 :	check_positive();
						break;
						
			case 8 :	leap_year();
						break;	
						
			case 9 :	greater_three_number();
						break;
						
			case 10 :	cost_selling();
						break;	
						
			case 11 :	marks();
						break;
						
			case 12 :	Upper_lower_case();
						break;	
						
			case 13 :	divisible_by_3and2();
						break;
						
			case 14 :	divisible_by_7or3();
						break;	
						
			case 15 :	check_positive_negetive_zero();
						break;
						
			case 16 :	Upper_lower_digit_special();
						break;	
						
			case 17 :	triangle_valid();
						break;
						
			case 18 :	Number_of_month();
						break;																
															
			case 19 :	exit(0);
			
			default :	printf("\nInvalid Choice...\n");										
		}
		getch();
	}
	return(0);
}

