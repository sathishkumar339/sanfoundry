#include<stdio.h>
int main()
{
	typedef struct p *q;
	struct p
	{
		int x;
		char y;
		q ptr;
	};
	struct p p ={1,2,&p};
	printf("%d\n",p.ptr->x);
}
