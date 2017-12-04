#include<stdio.h>
int main()
{
	int n,P[15][15],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			P[ i ][ 1 ] = 1;
			if(j==i)
			{
				P[ i ][ j ] = 1;
			}
			else if(i>1)
			{
				P[ i ][ j ] = P[ i-1 ][ j-1 ] + P[ i-1 ][ j ];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",P[i][j]);
		}
		printf("\n",P[i][j]);
	}
	return 0;
}
