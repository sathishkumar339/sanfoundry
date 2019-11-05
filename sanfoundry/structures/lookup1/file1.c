#include<stdio.h>
struct student
{
	char a[5];
};

void main()
{
	struct student s[] = {"hi","hey"};
	printf("%c\n",s[0].a[1]);
}	
