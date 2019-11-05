#include<stdio.h>
struct point{
		int x;
		int y;
};
int main()
{
	struct point p = {1};
	struct point p1 = {1};

	printf("p address %d, p1 address %d",p,p1);
	printf("p sizeof %d, p1 sizeof %d",sizeof(p),sizeof(p1));
	

	if(p == p1)
		printf("equal\n");
	else
		printf("not equal\n");
}
