#include <stdio.h>

int main(void)

{
    int i, num;

    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {

        if (i % 2 == 0)
        {
            printf("even - %d\n", i);
        }
        else
        {
            printf("odd - %d\n", i);
        }
    }

    return 0;
}