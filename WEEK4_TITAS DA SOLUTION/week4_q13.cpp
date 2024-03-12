#include<stdio.h>
int main()
{
	int count=1;

	for(int i=1;i<=4;i++)
	{
	    for(int l=1;l<i;l++)
		{
			printf("\t");
		}
		if(i==1|| i==4)
		{
		for(int j=4; j>=i;j--)
		{
			printf(" %d\t",count);
			count++;
		}
		for(int k=3;k>=i;k--)
		{
			printf(" %d\t",count);
			count++;
		}
		printf("\n\n");
		}
		else
		{
			for(int j=1; j<=1;j++)
		{
			printf(" %d\t",count);
			count++;
		}
		for(int m=3;m>=i;m--)
		{
			printf("\t");
			count++;
		}
		if(i==2){
		for(int n=1;n<=1;n++)
		{
			printf("\t");
			count++;
		}
	}
		for(int k=1;k>=1;k--)
		{
			printf(" %d\t",count);
			count++;
		}
		printf("\n\n");	
		}
	}
}
