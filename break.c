#include<stdio.h>
int main()
{
	int x=1,i;
	

	for(i=x; i<11; i++)
	{
		
		if(i==5)
		{
			//break;
			continue;
		}
		printf("round %d\n",i);
	}
	return 0;
}
