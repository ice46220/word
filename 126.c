#include<stdio.h>
int main()
{
	int n,m=1,i,x=0;
	scanf("%d",&n);
	for(i=0;x<n;i++)
	{
		if(i==0)
		{
			m=m+i;
			x++;
			printf("%d ",m);
		}
		else if(i>0 &&i%2!=0)
		{
			m=m+i;
			x++;
			printf("%d ",m);	
		}		
	}
	return 0;
}
