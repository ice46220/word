#include<stdio.h>
int main()
{
	int m,n,pinup,pindown;
	scanf("%d %d",&m,&n);
	pinup=(m/100000)+(m/10000%10)+(m/1000%10)+(m/100%10)+(m/10%10)+(m%10);
	pindown=(n/1000000)+(n/100000%10)+(n/10000%10)+(n/1000%10)+(n/100%10)+(n/10%10)+(n%10);
	printf("%02d%02d",pinup,pindown);
	return 0;
}
