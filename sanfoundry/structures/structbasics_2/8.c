#include<stdio.h>

struct p{
	int k;
	char c;
	float f;
};

int main()
{
	struct p x = {.c = 97,.k = 1,3};
	printf("%d %d %f\n",x.c,x.k,x.f);
}
