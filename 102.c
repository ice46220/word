#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a,x,y,z;
	scanf("%d",&y);
	z=y/10000;
	x=y%10000/100;
	a=y%10000%100;
	printf("%.2d/%.2d/%d",x,a,z-543);
  	return 0;
}
