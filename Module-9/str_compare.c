#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[100];

    scanf("%s %s", &a, &b);

    int val = strcmp(a, b);

    if (val == -1)
    {
        printf("A is small\n");
    }
    else if (val == 1)
    {
        printf("B is small\n");
    }

    else
    {
        printf("same");
    }

    return 0;
}