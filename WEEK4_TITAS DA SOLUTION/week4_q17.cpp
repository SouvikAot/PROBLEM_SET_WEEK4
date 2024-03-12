
#include<stdio.h>
int main()
{
	int count=0;
	for(int i=1;i<=5;i++)
	{
		//int count=0;
	    for(int l=1;l<i;l++)
		{
			printf("\t");
			count++;
		}
		if(i==1||i==5)
		{
		for(int j=5; j>=i;j--)
		{
			printf(" *\t");
		
		}
		for(int k=4;k>=i;k--)
		{
			printf(" *\t");
			
		}
		}
		else
		{
			for(int j=1;j<=1;j++)
			{
				printf(" *\t");
			}
			for(int j=1;j<=(4-count);j++)
			{
				printf("\t");
			}
			for(int k=1;k>=1;k--)
			{
				printf(" *\t");
			}
		}
			printf("\n\n");
	}
}
