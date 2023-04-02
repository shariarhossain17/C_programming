#include <stdio.h>

int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
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
    else
    {
        printf("A smaller than b");
    }
    return 0;
}