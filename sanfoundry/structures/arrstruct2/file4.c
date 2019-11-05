#include<stdio.h>
struct point 
{
	int x;
	int y;
}p[] = {1,2,3,4,5};
void foo (struct point*);

int main()
{
	foo(p);
	foo1();
}
void foo(struct point p[])
{
	printf("%d\n %d\n ",p->x,p[2].y);
}
	
int foo1()
{
	int a[0] = {3};
	
	printf("%d\n",a[0]);
}
	
