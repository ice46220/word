/*#include<stdio.h>
int main()
{
	int num,i,sum=0;
	scanf("%d",&num);
	for(i=1;i<num+1;i++)
	{
		if(i%2==0)
		sum+=i;
	}
	printf("%d",sum-1);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int num,i,sum;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
