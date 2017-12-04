#include<stdio.h>
int main ()
{
	int i,j,a[2][2],b[2][2],c[2][2];
	printf("Enter matrix A: \n");
	for(i=0;i<2;i++)
	 
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	printf("Enter matrix B: \n");
	for(i=0;i<2;i++)
	 
		for(j=0;j<2;j++)
		scanf("%d",&b[i][j]);
	
	printf("Matrix A+B: \n"); 
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		printf("%d ",a[i][j]+b[i][j]);
	
	return 0;
}
