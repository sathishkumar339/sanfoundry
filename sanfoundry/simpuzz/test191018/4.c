#include<stdio.h>

int main()
{
	int i = 0;

	for(foo();i == 1; i = 2)
		printf("In for loop\n");
	printf("After loop\n");

}
int foo()
{
	return 1;
}	
