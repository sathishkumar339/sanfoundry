#include<stdio.h>
struct student
{
	char *name;
};
struct student s;
struct student fun(void)
{
	s.name = "newton";
	printf("s.name = %s\n",s.name);	
	s.name = "alan";
	return s;
}
void main()
{
	struct student m  =fun();
	printf("m.name = %s s.name = %s\n",m.name,s.name);
	m.name = "turing";
	printf("s.name = %s ,m.name %s\n",s.name,m.name);
	s.name = "haijhaio";
	printf("s.name = %s ,m.name %s\n",s.name,m.name);
}
