#include<stdio.h>
#include<string.h>
int main()
{
	/*
	int i = 2,j,k = 10 ;
	for (i=0,k=5; i<k; i+=1 ) {
	for(j=0;j<k;j++)
	if ((i+j)%2==0)
		printf("*");
	else
		printf("-");
	printf("\n");
	}
	printf("%d %d %d\n",i,j,k);*/
	/*
	int num;
	int hh, mm;
	printf("Enter integer:");
	scanf("%d", &num);
	if(num >=1 && num <= 2400)
	{
		hh = num/100;
		mm = num - (hh*100);
		if(mm > 59 )
			printf("invalid time\n");
		else
			printf("time is %02d:%02d\n", hh, mm);
	}
	else
	{
		printf("invalid time\n");
	}
	*/
	/*
	int n;
	printf("Enter num:");
	scanf("%d", &n);
	if(n%2 == 0)
	{
		int round = n/2;
		int i,j,sum=0;
		for(i=1; i<=round; i++)
		{
			for(j=1; j<=n; j++)
			{
				if(j%i == 0)
					sum = sum+j;
			}
			printf("%d ", sum);
			sum = 0;
		}
	}
	else
	{
		int round = (n+1)/2;
		int i,j,sum=0;
		for(i=1; i<=round; i++)
		{
			for(j=1; j<=n; j++)
			{
				if(j%i == 0)
					sum = sum+j;
			}
			printf("%d ", sum);
			sum = 0;
		}		
	}
	*/
	/*
	char c[30]={"string"};
	float f[5] = {1.81, 2.54, -3.401, 4, 10.2};
	int a[6] = {6};
	printf("%d\n", c[29]);
	*/
	
	char num[10];
	int i;
	printf("Enter number:");
	scanf("%s", num);
	
	for(i=0;i<strlen(num); i++)
	{
		if(num[i] == '0')
			printf(" zero ");
		if(num[i] == '1')
			printf(" one ");
		if(num[i] == '2')
			printf(" two ");
		if(num[i] == '3')
			printf(" three ");	
		if(num[i] == '4')
			printf(" four ");			
		if(num[i] == '5')
			printf(" five ");			
		if(num[i] == '6')
			printf(" six ");			
		if(num[i] == '7')
			printf(" seven ");			
		if(num[i] == '8')
			printf(" eight ");			
		if(num[i] == '9')
			printf(" nine ");									
	}
	printf("\n");
	return 0;
}



