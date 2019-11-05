#include <stdio.h>
    void main()
    {
        int ch;
        printf("enter a value between 1 to 3:");
        scanf("%d", &ch);
        switch (ch)
        {
        case "1":
            printf("1");
            break;
        case "2":
            printf("2");
            break;
        }
    }
