#include<stdio.h>

int main()
{

	struct temp {
		int no;
		char name[20];
	};
	struct temp s;
	s.no = 8;
	printf("%d\n",s.no);
}

	
