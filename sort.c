#include<stdio.h>

void main()
{
	int ar[20],n,j,i,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(j=1;j<n;j++)
	{
		for(i=0;i<(n-1);i++)
		{
			if(ar[i]>ar[i+1])
			{
				k=ar[i+1];
				ar[i+1]=ar[i];
				ar[i]=k;
			}
		}
	}	
	printf("After sorting:\n ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",ar[i]);
	}
}

