#include<stdio.h>
int main()
{
	int j;
	for(int i=1; i<=4;i++)
	{
		if( i==1 || i==4)
		{
			for(int k=1;k<=4;k++)
			{
				printf("%d\t",i);
			}
			printf("\n\n");
		}
		else
		{
			for(int k=1;k<=1;k++)
			{
				printf("%d\t",i);
			}
			for(int l=1;l<=2;l++)
			{
				printf("\t");
			}
			for(int k=1;k<=1;k++)
			{
				printf("%d\t",i);
			}
			printf("\n\n");
		}
	}
}
