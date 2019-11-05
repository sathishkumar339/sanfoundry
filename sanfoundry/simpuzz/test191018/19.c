#include <stdio.h>
    void foo()
    {
        return 1;
    }
    void main()
    {
        int x = 0;
        foo();
        printf("%d", x);
    }
