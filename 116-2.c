#include<stdio.h>
int main()\
{
	int time,hr,min,sec;
	scanf("%d",&time);
	
		hr=time/3600;
		min=time%3600/60;
		sec=time%3600%60;
		printf("%d:%d:%d:",hr,min,sec);
	
	return 0;	
}
