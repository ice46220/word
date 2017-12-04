#include<stdio.h>
int main ()
{
	int i,num,pi,n=1,im,in;
	scanf("%d",&num);
	i=num;
	im=num;
	in=num;
	while(num>0)
	{
		scanf("%d",&pi);
		if(pi>0)
		{
			n++;
			if(pi<i&&pi<in)
			{
				in=pi;
			}	
			if(pi>i&&pi>im)
			{
				im=pi;	
			}
		}
		else
		{
		break;
		}
	}
	printf("%d\n",n);
	printf("%d\n",in);
	printf("%d\n",im);
	return 0;
}


