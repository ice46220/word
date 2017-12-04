#include<stdio.h>
int main()
{
    char name[30];
    gets(name);
    printf("Hello \"%s\"",name);
    return 0;
}
