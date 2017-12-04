#include<stdio.h>
int main()
{
	int x;
	printf("Enter score:");
	scanf("%d",&x);
	printf("You get grade %c",x>=50 ? 'P':'F');
	return 0;
}
