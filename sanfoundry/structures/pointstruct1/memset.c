#include<stdio.h>
#include<string.h>
int main()
{
	char b[20]= "hello world";
	char *c;

	c = memset(b,'s', 5);
	printf("%s\n",c);
}		

