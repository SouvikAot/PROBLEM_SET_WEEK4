#include<stdio.h>
int main()
{
	int count=1;
	for(int i=1 ;i<=4;i++)
	{
	if(i==1||i==4)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",count);
			count++;
		}
		printf("\n\n");
	}
	else
	{
		for(int j=1;j<=1;j++)
		{
			printf("%d\t",count);
			count++;
		}
		for(int j=1;j<=2;j++)
		{
			printf("\t");
			count++;
		}
		for(int j=1;j<=1;j++)
		{
			printf("%d\t",count);
			count++;
		}
		printf("\n\n");
	}
	}
	
}
