#include<stdio.h>
enum birds {SPARROW,PEACOCK,PARROT};
enum animals {TIGER = 8,LION,RABBIT,ZEBRA};

int main()
{
	enum animals m =  PEACOCK;
	int k;
	k = m ;
	printf("%d sizeof %d ,Peacock %d\n",k,sizeof(m),PEACOCK);
	return 0;
}
