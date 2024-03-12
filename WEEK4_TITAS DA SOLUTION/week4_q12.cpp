#include<stdio.h>
int main()
{
	int count=13;
	for(int i=0;i< 4;i++)
	{
	 int count1=count;
	 if(i==0||i==3){
		for(int j=0;j<4;j++)
		{
			printf("%d\t",count1);
			count1++;
		}
		count=count-4;
		printf("\n\n");
	}
	else
	{
		for(int j=0;j<1;j++)
		{
			printf("%d\t",count1);
			count1++;
		}
		for(int j=0;j<2;j++)
		{
			printf("\t");
			count1++;
		}
		for(int j=0;j<1;j++)
		{
			printf("%d\t",count1);
			count1++;
		}
		count=count-4;
		printf("\n\n");
	}
	}
}
