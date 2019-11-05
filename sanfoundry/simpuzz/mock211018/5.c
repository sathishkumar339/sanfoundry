#include <stdio.h>
    enum m{JAN, FEB, MAR};
    enum m foo1();
    int main()
    {
        enum m i = foo();
        printf("%d\n", i);
    }
    int  foo()
    {
        return JAN;
    }
