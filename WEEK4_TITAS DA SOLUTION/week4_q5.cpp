#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=4;j>i;j--)
		{
			printf("  ");
		}
		if(i==3)
		{
			for(int k=1; k<=1;k++)
			{
				printf("%d   ",i);
			}
			for(int k=1; k<=1;k++)
			{
				printf("  ");
			}
			for(int k=1; k<=1;k++)
			{
				printf("  %d",i);
			}
			
		}
		else
		{
			for(int k=1; k<=i;k++)
			{
				printf("%d   ",i);
			}
		}
	
		printf("\n");
	}
}
