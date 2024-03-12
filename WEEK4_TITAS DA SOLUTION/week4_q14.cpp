#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		if(i>2)
			{
				for(int k=1;k<=1;k++)
				{
					printf("*\t");
				}
				for(int k=1;k<=i-2;k++)
				{
					printf("\t");
				}
				for(int k=1;k<=1;k++)
				{
					printf("*\t");
				}
			}
			else
			{
				for(int j=1;j<=i;j++)
				{
					printf("*\t");
				}
			}
		printf("\n\n");
	}
	for(int k=1;k<=3;k++)
	{
		if(k==1)
		{
			for(int k=1;k<=1;k++)
			{
				printf("*\t");
			}
			for(int l=1;l<=2-k;l++)
			{
				printf("\t");
			}
			for(int l=1;l<=1;l++)
			{
				printf("*\t");
			}
		}
		else{
		for(int l=3;l>=k;l--)
		{
			printf("*\t");
		}
	}
		printf("\n\n");
	}
}
