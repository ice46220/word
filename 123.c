#include<stdio.h>
int main()
{
	char x; 
	int count=0,letter=0,digit=0;
    do 
	{
		scanf(" %c",&x);
		if(x>='0' && x<='9')
		{
		digit++;
		}
		if(x>='A'&&x<='Z'||x>='a'&&x<='z')
		{
		letter++;
		}
		count++;
	}
	while(x!='#');
	printf("Count: %d\n",count);
	printf("Letter: %d\n",letter);
	printf("Digit: %d",digit);
	return 0;
}

