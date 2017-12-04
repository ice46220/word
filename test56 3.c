#include<stdio.h>
int main()
{
	/*int a=0,b=-5;
	if((!a)&&b+1*5)
	printf("ABC");
	else
	printf("DEF");*/
	
	/*int i;
	for(i=1; i<=2; i++)
		printf("AAAAA\n");
	printf("BBBBB\n");
	printf("Good bye !!\n");*/
	
	/*int c=3;
	while (c>0)
	{
		switch(c)
		{
			case 1:printf("One\n");
				break;
			case 2:printf("Two\n");
				break;
			default :printf("Bobby\n");
				break;	
		}
	c--;
	}*/
	
	/*int i,j;
	for(i=1;i<4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i+j);
		}
		printf("\n");
	}*/
	
	/*char D='B';
	int i=1;
	do
	{
		if(i<=4)
			printf("A");
		else
			printf("%c",D);
		if(i==5)
			printf("\n");
		i++;
	}while(i<=10);*/
	
	/*int i,n,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Average of the summation from %d to %d is %.2f",1,n,(float)sum/n);*/
	
	/*int i,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("-");
		}
		for(j=0;j<n;j++)
		{
			printf("#");
		}
		printf("\n");
	}*/
	/*int a[4][5]={{1,2,3},{2},{1,2,2,2,2},{32,23}};
	int i,j;
	for(i=0; i<4;i++)
		for(j=0;j<4;j++)
			a[i][j]=a[i][j+1]+i*j+i+j;
			
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}*/
	//char symbols[7]={'$','%','@','!','|','&'};
	
	/*int grades[10]={0};
	printf("%d ",grades[1]);*/
	/*int j,list[6];
	for(j=0;j<6;j++)
	{
		list[j]=3*j+4;
		if(j%3==0)
		{
			list[j]=list[j]-2;
		}
		printf("%d ",list[j]);
	}		*/
	int i,a=0,b=0,c=0,d=0,e=0;
	char grade[15]={'C','D','B','A','E','A','D','B','C','B','A','B','C','D','C'};
	for(i=0;i<15;i++)
	{
		switch(grade[i])
		{
			case 'A':a++;
			break;
			case 'B':b++;
			break;
			case 'C':c++;
			break;
			case 'D':d++;
			break;
			case 'E':e++;
			break;
		}
	}
	printf("A-->%d",a);
	for(i=0;i<a;i++)
	{
		printf("*");
	}
	printf("\n");
	printf("B-->%d",b);
	for(i=0;i<b;i++)
	{
		printf("*");
	}
	printf("\n");
	printf("C-->%d",c);
	for(i=0;i<c;i++)
	{
		printf("*");
	}
	printf("\n");
	printf("D-->%d",d);
	for(i=0;i<d;i++)
	{
		printf("*");
	}
	printf("\n");
	printf("E-->%d",e);
	for(i=0;i<e;i++)
	{
		printf("*");
	}
	return 0;
}

