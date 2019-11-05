#include<stdio.h>

int main()
{
	struct temp{
		int b;
	}a;
	struct temp *my_struct = &a;
	(*my_struct).b  = 10;

	printf("%d\n",(*my_struct).b);

} 	
