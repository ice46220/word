#include<stdio.h>
int main()
{
	int egg[4][7],i,j,sum[4],max[7],day;
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;j++)
		{
			scanf("%d",&egg[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		
		for(j=0,sum[i]=0;j<7;j++)
		{
			sum[i]=sum[i]+egg[i][j];
		}
		printf("Week %d:%d\n",i+1,sum[i]);
	}
	for(i=0;i<7;i++)
	{
		for(j=0,max[i]=0;j<4;j++)
		{
			max[i]=max[i]+egg[j][i];
		}
	}
	day=max[0];
	for(i=1;i<7;i++)
	{
		if(max[i]>day)
		{
			day=max[i];
		}	
	}
	printf("Max day:");
	for(i=0;i<7;i++)
	{
		if(day==max[i])
		{
			if(i==0)
			{
				printf("Monday %d",day);
				break;
			}
			else if(i==1)
			{
				printf("Tuesday %d",day);
				break;
			}
			else if(i==2)
			{
				printf("Wednesday %d",day);
				break;
			}
			else if(i==3)
			{
				printf("Thursday %d",day);
				break;
			}
			else if(i==4)
			{
				printf("Friday %d",day);
				break;
			}
			else if(i==5)
			{
				printf("Saturday %d",day);
				break;
			}
			else if(i==6)
			{
				printf("Sunday %d",day);
				break;
			}
		}
	}
	return 0;
}
