#include<stdio.h>

struct p
{
	int x;
	char y;
};
void foo(struct p*);
typedef struct p* q;
	
int main()
{
	struct p p1[] = {1,92,3,94,5,96};

	foo(p1);
	//printf("%d\n",p1 -> x);
}
void foo(struct p* p1)
{	
	q ptr1 = p1;
	p1 -> x = 10;
	printf("%d\n",ptr1 -> x);
}
