/*#include<stdio.h>
int main()
{
	int x,y;
	printf("First player,please enter your number:");
	scanf("%d",&x);
	printf("Let's start!\n");
	do
	{
		printf("Second player,please enter your number:");
		scanf("%d",&y);
		if(y*10<x)
		{
			printf("Much smaller!!!\n");
		}
		else if(y<x)
		{
			printf("Bigger!\n");
		}
		else if(y>x*10)
		{
			printf("Bigger!\n");
		}
		else if(y>x)
		{
			printf("Smaller!\n");
		}
	}while(y!=x);
	printf("Congratulations!");
	return 0;
}*/
#include<stdio.h>
int main()
{
	int x,i,eve=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("Enter number%d:",i+1);
		scanf("%d",&x);
		if(x%2==0)
		{
			eve++;
		}
		else
		{
			odd++;
		}
	}
	printf("There are %d even number and %d odd number",eve,odd);
	return 0;
}
