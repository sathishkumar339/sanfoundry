#include<stdio.h>

struct p
{
	int x;
	char y;
	struct p *ptr;
};
int main()
{
	struct p p = {1,2,&p};
	printf("%d\n",p.ptr->x);
}
