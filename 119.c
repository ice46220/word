#include<stdio.h>
int main()
{
	float i,sum,j,co;
	scanf("%f",&i);
	for(j=1;j<=i;j++)
	{
		scanf("%f",&co);
		sum=sum+co;
	}
	printf("%.2f\n",sum);
	printf("%.2f",sum*95/100);
	return 0;
}
