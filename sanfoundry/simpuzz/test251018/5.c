#include<stdio.h>

typedef struct student 
{
	char *a;
}stu;

void main()
{
	stu s;
	s.a = "hey";
	printf("%s\n",s.a);

}	
