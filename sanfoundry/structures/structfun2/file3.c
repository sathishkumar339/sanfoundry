#include<stdio.h>

struct point
{
	int x;
	int y;
};

struct notpoint
{
	int x;
	int y;
};

struct point foo();
int main()
{
	struct point p = {1};
	struct notpoint p1 = {2};
	p1 = foo();	
	
	printf("%d\n",p1.x);
}

struct point foo()
{
	struct point temp = {3,4};
	return temp;
}

