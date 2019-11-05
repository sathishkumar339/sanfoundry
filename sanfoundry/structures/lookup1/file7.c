#include<stdio.h>
#include<string.h>
struct p
{	
	char *name;
	struct p *next;
};

struct p *ptrary[10];
int main()
{
	struct p p,q;
	p.name  = "xyz";
	p.next = NULL;
	
	ptrary[0] = &p;
	q.name = p.name;
	ptrary[1] = &q;
	
	printf("ptary[1] = %s p.name %s\n",ptrary[1] -> name,p.name);
	return 0;
}	
