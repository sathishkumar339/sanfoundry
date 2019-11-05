#include<stdio.h>
struct student
{
	char name;
};
void main()
{
	struct student s,m;
	s.name = 's';
	m =  s;
	s.name  = 'p';
	printf("s.name = %c ,m.name =  %s\n",s.name,m.name);
}	

