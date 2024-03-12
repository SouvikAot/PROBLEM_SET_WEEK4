#include<stdio.h>
int main()
{
	int count=10;
	for(int i=1;i<=4;i++)
	{
		if(i!=2)
		{	
		for(int j=4;j>=i;j--)
		{
			printf("%d\t",count);
				count--;
		}
		}
		else
		{
			for(int j=1;j>=1;j--)
			{
				printf("%d\t",count);
				count--;
			}
			for(int j=1;j>=1;j--)
			{
				printf("\t");
				count--;
			}
			for(int j=1;j>=1;j--)
			{
				printf("%d\t",count);
				count--;
			}	
		}
		printf("\n\n");
	
	}
}
