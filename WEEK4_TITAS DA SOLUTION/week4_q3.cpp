#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
			if(i==3)
			{
				for(int j=1;j<=1;j++)
				{
					printf("%d\t",i);
				}
				for(int j=1;j<=1;j++)
				{
					printf("\t");
				}
				for(int j=1;j<=1;j++)
				{
					printf("%d\t",i);
				}
			}
			else
			{
				for(int j=1;j<=i;j++)
				printf("%d\t",i);
			}	
		printf("\n");
	}
}
