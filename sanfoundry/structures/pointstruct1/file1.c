#include<stdio.h>
struct p
{
	int x;
	int y;
};

int main()
{
	struct p p1[] = {1,92,3,94,5,96};
	struct p *ptr1 = p1;

	int x = (sizeof(p1)/3);

	printf("size of p1 %d %d\n",sizeof(p1),(ptr1+1) -> x );
	if(x == sizeof(int) + sizeof(char))
		printf("%d\n",ptr1 -> x);
	else
		printf("false\n");

}	
