#include<stdio.h>
typedef struct p* q;

int main()
{
	struct p{
		int x;
		char y;
		q ptr;
	};

	struct p p1 = {1,2,&p1};
	printf("%d\n",(p1.ptr)->x);
	return 0;
}
