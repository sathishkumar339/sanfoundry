#include<stdio.h>

int main()
{

	int x = 3;
	const int *p = &x;
	
	printf("p = %p %d\n",p,*p);
	*p++;
	printf("%p\n",*p);
	return 0;

}

