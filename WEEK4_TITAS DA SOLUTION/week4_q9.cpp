#include<stdio.h>
int main()
{
	int count=3;
	for(int i=1;i<=4;i++)
	{
		if(i!=3)
		{
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",count);
			count++;
		}
		}
		else
		{
			for(int j=1;j<=1;j++)
			{
				printf("%d\t",count);
				count++;
			}
			for(int j=1;j<=1;j++)
			{
				printf("\t");
				count++;
			}
			for(int j=1;j<=1;j++)
			{
				printf("%d\t",count);
			}	
		}
		printf("\n\n");
	}
}
