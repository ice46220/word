#include<stdio.h>
int main()
{
	int n,m=1,i=0;
	scanf("%d",&n);
	do{
		m=m+i;
		printf("%d ",m);
		i++;
	}while(m<=n-i);
	return 0;
}
