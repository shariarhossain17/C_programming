#include <stdio.h>
int main()
{
    char ar[7];

    int sz = sizeof(ar) / sizeof(char);

    printf("%d", sz);
    // for (int i = 0; i < 7; i++)
    // {
    //     scanf("%c", &ar[i]);
    // }
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%c", ar[i]);
    // }
    return 0;
}