#include<stdio.h>

int main()
{

	int i = 0,j=  0;
//			goto l1;
	while( i < 2)
	{
		         l1:
		i++;
		while(i < 3)
		{
			//j++;
			printf("loop\n");
			if(j == 3)
			break;
			goto l1;
			printf("loop123\n");
		}
	}

}

