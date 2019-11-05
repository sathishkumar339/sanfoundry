#include<stdio.h>
struct p
{
	char *name;
	struct p *next;
};

struct p *ptrary[10];
int main()
{
	struct p p;
	p.name = "xyz";
	p.next  = NULL;
	ptrary[0] = &p;
	printf("%s\n",ptrary[0] -> name );
	return 0;
}
