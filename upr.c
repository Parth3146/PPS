#include<stdio.h>
#include<string.h>

void upper(char str[20]);

void main()
{
	char str[20];
	printf("Enter a string to convert in upper case: ");
	gets(str);
	upper(str);
}

void upper(char str[20])
{
	printf("%s",strupr(str));
}

