#include<stdio.h>

struct p
{
	int x;
	int y;
};

int main(){
	struct p p1[] = {1,92,3,94,5,96};
	struct p *ptr1 = p1;
	int *p;

	int x = (sizeof(p1)/sizeof(ptr1));
	printf("%d   %d  %d\n",sizeof(p1),sizeof(ptr1),sizeof(p));
	if(x == 1)
		printf("%d\n",ptr1 -> x);
	else
		printf("false\n");


}

