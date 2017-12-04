#include<stdio.h>
int main()
{
	int n,i,j,det;
	scanf("%d",&n);
	int table[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&table[i][j]);
		}
	}
	if(n==2)
	{

		det=(table[0][0]*table[1][1])-(table[0][1]*table[1][0]);
	}
	else if(n==3)
	{
		det=(table[0][0]*((table[1][1]*table[2][2])-(table[1][2]*table[2][1])))-
		(table[0][1]*((table[1][0]*table[2][2])-(table[1][2]*table[2][0])))+
		(table[0][2]*((table[1][0]*table[2][1])-(table[1][1]*table[2][0])));
	}
	printf("%d",det);
	return 0;
}
