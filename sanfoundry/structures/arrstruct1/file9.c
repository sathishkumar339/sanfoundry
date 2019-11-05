#include<stdio.h>
struct student
{
	int d;
};

void main()
{
	struct student s[2];
	printf("%d\n",sizeof(s));
}	
