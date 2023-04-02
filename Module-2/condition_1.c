#include <stdio.h>

int main()
{

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        printf("A bigger than b\n");

        if (a == c)
        {
            printf("a and c are equal\n");
        }
        else
        {
            printf("a and c are not equal\n");
        }
    }

    else if (a > d)
    {
        printf("a greater than d");
    }
    else
    {
        printf("A smaller than b");
    }
    return 0;
}