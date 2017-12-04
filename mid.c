/*#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<6;i+=2)
	{
		switch(i)
		{
			case 1:printf("Red");
			case 3:printf("Green");
			case 5:printf("Blue");
			default: printf("White\n");
		}
	}
	return 0;		
}*/
/*#include<stdio.h>
int main()
{
	int i=2;
	do{
		printf("%d\n",i);
		i=i*i;
	}while(i<=16);
}*/
/*#include<stdio.h>
int main()
{
	int a=0;
	while(a<5)
	{
		if(a<2)
		{
			printf("%d",a);
		}
		else 
		{
			printf("%d\n",a);
		}
		a++;
	}
}*/
/*#include<stdio.h>
int main()
{
	int i,num,set;
	char sex;
	float sum=0.0;
	printf("Num:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("sex and set:");fflush(stdin);
		scanf("%c %d",&sex,&set);
		if((sex=='M')&&(set==1))
			sum=sum+170;
		else if((sex=='M')&&(set==2))
			sum=sum+250;
		else if((sex=='F')&&(set==1))
			sum=sum+120;
		else if((sex=='F')&&(set==2))
			sum=sum+200;
		else if((sex=='C')&&(set==1))
			sum=sum+80;
		else if((sex=='C')&&(set==2))
			sum=sum+150;
	}
	if(sum>500)
		sum-=(sum*5)/100;
	else if(sum>1000)
		sum-=(sum*10)/100;
	else if(sum>1500)
		sum-=(sum*15)/100;
	printf("Total:%.2f",sum);
	getch();
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i,j;
	for(j=0,i=-5;i<j;i++)
	printf("o");
	printf("h");
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int x=0;
	x+=1;
	while(x<5)
	{
		
		switch(x)
		{
			case 0:printf("0");
			break;
			case 2:printf("M");
			break;
			default:printf("G");
		}
		printf("%d",x);
		x++;
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<4;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",i+j);
		printf("\n");
		i++;
		
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		if(i<=4)
			printf("Yeah");
		else
			printf("!");
		if(i>5)
			break;
		i+=5;
	}while(i<=10);
	return 0;
}
