#include<stdio.h>

void main()
{
	float n;
	float i,j;
	j=0.000001;
	printf("Enter a number: ");
	scanf("%f",&n);
	for(i=0;i<n;i=i+j)
	{
		if((i*i)>n)
		{
			i=i-j;
			break;
		}
	}
	printf("%f",i);
}

