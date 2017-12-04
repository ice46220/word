#include <stdio.h>
int main()
{
    int x1,x2,x3,x4,x5,total;
	float gra;
    char  g1,g2,g3,g4,g5;
	char A,B,C,D,E;
	A=4;
	B=3;
	C=2;
	D=1;
	E=0;
	scanf("%d %c",&x1,&g1);
    scanf("%d %c",&x2,&g2);
    scanf("%d %c",&x3,&g3);
    scanf("%d %c",&x4,&g4);
    scanf("%d %c",&x5,&g5);
	total=x1+x2+x3+x4+x5;
	gra=(x1*g1)+(x2*g2)+(x3*g3)+(x4*g4)+(x5*g5);
    printf("%.2f",gra/total);
    return 0;
}
