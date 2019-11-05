#include<stdio.h>

struct student
{
	char *c;
	struct student *point;
};

void main()
{
	struct student s;
	printf("%d\n",sizeof(s));
}		
