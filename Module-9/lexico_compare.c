#include <stdio.h>

int main()
{
    char a[100];
    char b[100];

    scanf("%s %s", &a, &b);

    int i = 0;

    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("a and b is same");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b is smaller");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is small");
            break;
        }

        else
        {
            printf(" B is small");
            break;
        }
    }

    return 0;
}