#include<stdio.h>
int main()
{
	int hh,mm;  
	scanf("%d:%d",&hh,&mm);
	if(hh==00)
	{
		printf("%02d:%02d a.m.",hh+12,mm);
	}
	else if(hh>=01&&hh<12&&mm>=00)
	{
		printf("%02d:%02d a.m.",hh,mm);	
	} 
	else if(hh==12)
	{
		printf("%02d:%02d p.m.",hh,mm);	
	} 
	else if(hh>=13&&mm>=00)
	{
		printf("%02d:%02d p.m.",hh-12,mm);	
	} 
	return 0;
}
