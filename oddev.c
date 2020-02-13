#include<stdio.h>

void main()
{
	int i,ar[50];
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("data.txt","r");
	for(i=0;i<10;i++)
	{
		fscanf(fp1,"%d",&ar[i]);
	}
	fp2=fopen("odd.txt","w");
	fp3=fopen("even.txt","w");
	for(i=0;i<10;i++)
	{
		if(ar[i]%2==0)
			fprintf(fp3,"%d ",ar[i]);
		else
			fprintf(fp2,"%d ",ar[i]);
	}
}


