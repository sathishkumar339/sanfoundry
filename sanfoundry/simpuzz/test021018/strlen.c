#include <stdio.h>
    #include <string.h>
    int main()
    {
	char str[2]  = "x";
	char ary[2] ;	
	ary[0] = 'f';
	ary[1] = '\0';

        printf("%d %d \n", strlen(str), strlen(ary));
        printf("sizeof %d sizeof ary %d \n", sizeof(str),sizeof(ary));
        printf("str %s , ary %s \n", (str),(ary));
        return 0;
    }


