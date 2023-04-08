#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int i = 6;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= num);
    return 0;
}