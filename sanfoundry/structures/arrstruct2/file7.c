#include<stdio.h>
struct point 
{
	int x;
	int y;
};
	
void foo(struct point *);
void main()
{
	struct point p1[] = {1,2,3,4,5};
	foo(p1);
}
void foo(struct point p[])
{
	printf("%d\n %d\n",p->x,(p+2)->y);
}
