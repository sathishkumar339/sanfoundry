#include<stdio.h>
struct student
{
	char *c;
};

void main()
{
	struct student s[2];
	printf("%d\n",sizeof(s))	;
}
