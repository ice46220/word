#include<stdio.h>
int main()
{
	int student[10],i,sum=0;
	float avg;
	for(i=0;i<10;i++)
	{
		scanf("%d",&student[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=student[i];
	}
	avg=(float)sum/10;
	printf("Pass:");
	for(i=0;i<10;i++)
	{
		if(student[i]>=50)
		{
			printf("%d ",student[i]);
		}
	}
	printf("\nFail:");
	for(i=0;i<10;i++)
	{
		if(student[i]<50)
		{
			printf("%d ",student[i]);
		}
	}
	printf("\nAverage:%.2f",avg);
	return 0;
}
