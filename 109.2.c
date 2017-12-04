#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	y=x%7;
	if (y==1)
	{
		printf("Sunday");
	}
	else if(y==2)
	{
		printf("Monday");
	}
	else if(y==3)
	{
		printf("Tuesday");
	}
	else if(y==4)
	{
		printf("Wednesday");
	}
	else if(y==5)
	{
		printf("Thursday");
	}
	else if(y==6)
	{
		printf("Friday");
	}
	else if(y==0)
	{
		printf("Saturday");
	}
	return 0;
}
