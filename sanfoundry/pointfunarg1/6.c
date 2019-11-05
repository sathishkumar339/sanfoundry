#include<stdio.h>
void foo(int const **);
int main()
{
	int i = 11;
	int *p = &i;
	foo(&p);
	printf("%d\n",*p);
}
void foo(int const **p)
{
	int j = 10;
	*p = &j;
	printf("%d\n",**p);
	//**p = 12;
}	
