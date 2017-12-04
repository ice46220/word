#include <stdio.h>
int main()
{
	char abcde;
	int i;
	float n,grade,sum=0,sun=0;
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&grade);
		scanf(" %c",&abcde);
		sum+=grade*('E'-abcde);
		sun+=grade;
	}
	printf("%.2f\n",sum/sun);
	return 0;
}
