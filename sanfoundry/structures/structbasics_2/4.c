#include<stdio.h>

struct temp {
	int k;
	char c;
}p;	

int p = 10;
int main()
{
//	int p = 10;
	p.k = 10;
	printf("%d %d\n",p.k,p);
}



