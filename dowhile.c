/*#include<stdio.h>
int main()
{
	int n;
	float score,avg,sum;
	n=1; 
	sum=0;
	do
	{
		printf("Enter score of student %d:",n);
		scanf("%f",&score);
		sum=sum+score;
		n++;	
	}
	while(n<=10);
	avg=sum/10;
	printf("Class average:%.2f",avg);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int n,p=0,f=0,x;
	for(n=1; n<=10; n++)
	{
		printf("Enter Result(1=pass),(2=fail): ");
		scanf("%d",&x);
		if(x==1)
		{
			p++;
		}
		else
		{
			f++;
		}
	}
	
	printf("Passed=%d\n",p);
	printf("Fail=%d",f);
	return 0;
}

