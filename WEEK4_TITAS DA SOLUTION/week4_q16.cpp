#include<stdio.h>
int main()
{
	for(int i=1; i<=4;i++)
	{
		for(int j=3; j>=i;j--)
		{
			printf("\t");
		}
		if(i>2)
		{
			for(int l=1;l<=1;l++)
			{
				printf("*\t");
			}
			for(int l=1;l<=(i-2);l++)
			{
				printf("\t");
			}
			for(int l=1;l<=1;l++)
			{
				printf("*\t");
			}
			
		}
		else
		{
		for(int k=1;k<=i;k++)
		{
			printf("*\t");
		}
		}
		printf("\n\n");
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("\t");
		}
		if(i>1)
		{
		for(int k=3;k>=i;k--)
		{
			printf("*\t");
		}
		}
		else
		{
			for(int l=1;l<=1;l++)
			{
				printf("*\t");
			}
			for(int l=1;l<=i;l++)
			{
				printf("\t");
			}
			for(int l=1;l<=1;l++)
			{
				printf("*\t");
			}
		}
		printf("\n\n");
	}
}
