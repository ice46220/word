#include<stdio.h>
int main()\
{
	int time,hr,min,sec;
	scanf("%d",&time);
	if(time>=3600)
	{
		hr=time/3600;
		min=time%3600/60;
		sec=time%3600%60;
		printf("%d:%d:%d:",hr,min,sec);
	}
	else
	{
		hr=0;
		min=time/60;
		sec=time%60;
		printf("%d:%d:%d",hr,min,sec);	
	}
	return 0;	
}

