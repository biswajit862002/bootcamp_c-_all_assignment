#include<stdio.h>

void count_vowel_consonant(char *p);
int main()
{
	char str[100],i;
	printf("\nEnter a string : ");
	gets(str);
	
	printf("\nOriginal String is : ");
	printf("%s",str);
	
	count_vowel_consonant(str);
	
	return(0);
}

void count_vowel_consonant(char *p)
{
	int i,count_vowel=0,count_consonant=0;
	for(i=0; *(p+i); i++)
	{
		if( p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' ||
			p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U' )	
		{
			count_vowel++;	
		}	
		else if( p[i] == 'b' || p[i] == 'c' || p[i] == 'd' || p[i] == 'f' || p[i] == 'g' || p[i] == 'h' || p[i] == 'j' || p[i] == 'k' || 
				 p[i] == 'l' || p[i] == 'm' || p[i] == 'n' || p[i] == 'p' || p[i] == 'q' || p[i] == 'r' || p[i] == 's' || p[i] == 't' ||
				 p[i] == 'v' || p[i] == 'w' || p[i] == 'x' || p[i] == 'y' || p[i] == 'z' ||
				 p[i] == 'B' || p[i] == 'C' || p[i] == 'D' || p[i] == 'F' || p[i] == 'G' || p[i] == 'H' || p[i] == 'J' || p[i] == 'K' || 
				 p[i] == 'L' || p[i] == 'M' || p[i] == 'N' || p[i] == 'P' || p[i] == 'Q' || p[i] == 'R' || p[i] == 'S' || p[i] == 'T' ||
				 p[i] == 'V' || p[i] == 'W' || p[i] == 'X' || p[i] == 'Y' || p[i] == 'Z' )
				 	
		{
			count_consonant++;	
		}
	}	    
	
	printf("\n\nCount the numner of vowels are : %d",count_vowel);
	printf("\nCount the numner of consonants are : %d",count_consonant);
	
	
}
