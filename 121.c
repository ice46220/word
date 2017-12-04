#include<stdio.h>
int main ()
{
	int i,num,pi,n=1,im=nu,in;
	scanf("%d",&num);
	while(num>0)
	{
			scanf("%d",&pi);
			if(pi>0)
			{
				n++;
				if(pi>num&&pi>im)
				im=pi;
				else if(pi<num)
				in=pi;			
			}
			else
			{
				break;
			}
	}
	printf("n=%d\n",n);
	printf("max=%d\n",im);
	printf("min=%d",in);
	return 0;
}
