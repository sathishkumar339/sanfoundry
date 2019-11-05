#include<stdio.h>

int func(int);
    double func(int);
    int func(float);
int main()
{	goto l2;
	printf("%d\n",1);
	l1: l2:
	printf("%d\n",2);
	printf("%d\n",3);
	
}
