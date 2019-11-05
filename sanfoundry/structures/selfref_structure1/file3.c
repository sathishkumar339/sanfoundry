#include<stdio.h>
struct student 
{
	char *c;
	struct student point;
};
void main()
{
	struct student s;
	s.c = "hello";
	printf("%s\n",s.c);
}

