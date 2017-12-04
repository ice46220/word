#include<stdio.h>
int main()
{
	char word; 
	scanf("%c",&word);
	if(word>='A'&& word<='Z')
	{
		printf("Capital letter'%c'",word);
	}
	else if (word>='a'&&word<='z')
	{
		printf("Small letter'%c'",word);
	}
	else if(word>='0'&&word<'10')
	{
		printf("Digit'%c'",word);
	}
	else
	{
		printf("Special symbol'%c'",word);
	}
	return 0;
}

