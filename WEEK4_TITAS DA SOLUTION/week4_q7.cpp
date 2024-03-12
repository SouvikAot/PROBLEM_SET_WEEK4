#include<stdio.h>
int main()
{
	int count=6;
	for(int i=1;i<=4;i++)
	{
		if(i!=2)
		{
		for(int j=4;j>=i;j--)
		{
			printf("%d\t",count);
		}
		}
		else
		{
			for(int j=1;j>=1;j--)
			{
				printf("%d\t",count);
			}
			for(int j=1;j>=1;j--)
			{
				printf("\t");
			}
			for(int j=1;j>=1;j--)
			{
				printf("%d\t",count);
			}	
		}
		printf("\n\n");
		count--;
	}
}
