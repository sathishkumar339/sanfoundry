        #include <stdio.h>

        struct p

        {

            char *name;

            struct p *next;

        };

        struct p *ptrary[10];

        int main()

        {

            struct p p;

            p->name = "xyz";

            p->next = NULL;

            ptrary[0] = &p;

            printf("%s\n", p->name);

            return 0;

        }
