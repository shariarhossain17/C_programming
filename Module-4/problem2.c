#include <stdio.h>

int main(void)
{

    int a, b;
    char str;
    scanf("%d %d", &a, &b);

    if (a % b == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}