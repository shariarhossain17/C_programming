#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", &a, &b);

    strcpy(a, b);

    printf("%s %s", a, b);

    // int len = strlen(b);

    // for (int i = 0; i < len; i++)
    // {
    //     a[i] = b[i];
    // }
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%c", a[i]);
    // }

    return 0;
}