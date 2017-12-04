#include<stdio.h>
int main()
{
	int h,s,a;
	scanf("%d %d",&h,&s);
	if(h==0 &&s<15)
	{
		printf("0");
	}
	else if(h==0 && s>=15)
	{
		printf("50");
	}
	else if(4>h && h>0 && s>=0)
	{
		printf("50");
	}
	else if(h>=4 && s>=0)
	{
		a=h-3;
		printf("%d",a*10+50);
	}
	return 0;
}
