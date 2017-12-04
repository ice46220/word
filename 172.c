#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,i;
	scanf("%d",&n);
	char mes[n][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",mes[i]);
	}
	int max;
	max=strlen(mes[0]);
	for(i=1;i<n;i++)
	{
		if(strlen(mes[i])>max)
		{
			max=strlen(mes[i]);	
		}
	}
	char lo[n][100]; int x=0;
	for(i=0;i<n;i++)
	{
		if(strlen(mes[i])==max)
		{
			strcpy(lo[x],mes[i]);
			x++;	
		}
	}
	char loo[1][100];
	strcpy(loo[0],lo[0]);
	if(x==0)
	{
		printf("%s",lo[0]);
	}
	else if(x>0)
	{
		for(i=1;i<x;i++)
		{
			m=strcmp(loo[0],lo[i]);
			if(m<0)
			{
				strcpy(loo[0],lo[i]);
			}	
		}	
	}printf("%s",loo[0]);
	return 0;
}
