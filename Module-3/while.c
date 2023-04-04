#include <stdio.h>

int main(void)
{
    int i;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}