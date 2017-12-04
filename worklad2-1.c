#include <stdio.h>
int main()
{ 	
	int a;
	float b, div; double d;
	char c;
	int i=15;
	int j=2;
	printf("size of int is %d\n",sizeof(int));
	printf("size of a is %d\n",sizeof(a));
	printf("size of float is %d\n",sizeof(b));
	printf("size of d is %d\n",sizeof(d));
	printf("size of char or c is %d\n\n",sizeof(c));
	div =i/j;
	printf("div = %f\n", div);
	return 0;
}

