#include <stdio.h>
int main()
{
    int n, k = 4;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= k; j++)
    //     {
    //         printf("*");
    //     }
    //     k--;
    //     printf("\n");
    // }

    return 0;
}