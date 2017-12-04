#include<stdio.h>
int main ()
{
	int x,i,j;
	printf("Enter number:");
	scanf("%d",&x);
	for(i=1;i<13;i++)
	{
		j=x*i;
		printf("%d*%d=%d\n",x,i,j);
	}
	return 0;
}
