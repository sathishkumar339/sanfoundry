#include<stdio.h>

struct p
{
	int x;
	char y;
};

int main()
{
	struct p p1[3] = {1,92,3,94,5,96};
	struct p *ptr1 = p1;
	//ptr1[0] = p1[0];

	int x = (sizeof(p1)/sizeof(ptr1));
	printf("x = %d, %d sizeof ptr1 %d\n",x,ptr1 -> x,sizeof(ptr1));
	if(x == 1)
		printf("%d\n",ptr1 -> x);
	else
		printf("false\n");
}
	
