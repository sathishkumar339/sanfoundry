#include<stdio.h>

int main()
{
	int x = 1;
	short int i = 2;
	float f = 3;
	printf("sizeof %d , %d, %d\n",sizeof((1?i:f)),sizeof(f),sizeof (0));
	
	if (sizeof((i ? i:i)) == sizeof(float))	
		printf("float\n");
	if (sizeof((x == 2 ? f : (short int )i  )) == sizeof(short int))	
		printf("short int \n");
}

