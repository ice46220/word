#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; int sum,i,num=0; 
    gets(str);
    sum=strlen(str);
    for(i=0;i<strlen(str);i++)
    {
    	if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
    	{
    		str[i]='X';
    		num++;
		}
	}
    printf("%d %d\n",num,sum);
    printf("%s",str);
    return 0;
}
