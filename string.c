#include<stdio.h>
#include<string.h>

void main()
{
	char str[20],c;
	int i,j=0;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a character to check: ");
	scanf("%c",&c);
	for(i=0;i<strlen(str);i++)
	{
			if(str[i]==c)
				j++;
	}
	printf("Occurence of character %c in string is %d times.",c,j);
}

