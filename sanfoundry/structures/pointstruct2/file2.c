#include<stdio.h>

struct student
{
	char *c;
};

void main()
{
	struct student *s;
	s-> c = "hello";
	printf("%p\n",s);
	printf("%s\n",s->c);
}

