        #include <stdio.h>
	#include <string.h>

        struct p

        {

            char *name;

            struct p *next;

        };

        struct p *ptrary[10];

        int main()

        {

            struct p p, q;

            p.name = "xyz";

            p.next = NULL;

            ptrary[0] = &p;

		printf("upto heree\n");

           q.name = p.name;

            ptrary[1] = &q;

            printf("%s\n", ptrary[1]->name);

            return 0;

        }
