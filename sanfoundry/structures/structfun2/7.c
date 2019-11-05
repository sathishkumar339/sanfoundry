#include<stdio.h>


struct student fun(void)
{
	struct student	
	{
		char *name;
	};
	struct student s;
	s.name = "alan";
	return s;
}
void main(){
	struct student m1 = fun();
}	

