#include<Stdio.h>
#include<string.h>

void Ispalindrome(char str[]);

void main()
{
	char str[20];
	printf("Enter a string: ");
	gets(str);
	Ispalindrome(str);
}

void Ispalindrome(char str[])
{
	char b[20];
	strcpy(b,str);
	strrev(b);
	if(strcmp(b,str)==0)
		printf("String is palindrome.");
	else
		printf("String is not palindrome.");
}

