#include <stdio.h>
    void foo();
        void foo(int);
    int main()
    {
        foo(1);
        return 0;
    }
    void foo(int i)
    {
        printf("2 ");
    }
