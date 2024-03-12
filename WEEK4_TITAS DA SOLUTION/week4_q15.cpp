#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5; j>=i;j--)
		{
			printf("\t");
		}
		if(i<5){
		for(int k=1;k<=1;k++)
		{
			printf("*\t");
		}
		for(int k=1;k<i;k++)
		{
			printf("\t");
		}
		if(i>2)
		{
			for(int k=1;k<=(i-2);k++)
			{
				printf("\t");
			}
		}
		if(i!=1){
		for(int l=1;l<=1;l++)
		{
			printf("*\t");
		}
	}
		printf("\n\n");
	}
	else
	{
		for(int j=1;j<=9;j++)
	{
		
		printf("*\t");
	}
	}
	}
	
}
