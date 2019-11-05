#include<stdio.h>
struct point
{
	int x;
	int y;
};

	struct point p1[] = {1,2,3,4,5};
void foo(struct point*);
int main()
{
	foo(p1);

}

void foo(struct point *p)
{
	printf("%d %d\n",(p+1)->x,(*(p+1)).y);
}
