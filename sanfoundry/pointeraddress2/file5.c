#include<stdio.h>
void main()
{
	int x = 10;
	int *ptr = &x;
	printf("%p\n",&x);
	printf("%p\n",&ptr);
	printf("%p\n",ptr);

	ptr++;
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}
