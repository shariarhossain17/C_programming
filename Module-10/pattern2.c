#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    // s = n - 1;
    // k = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= s; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= k; j++)
    //     {
    //         printf("*");
    //     }
    //     s--;
    //     k = k + 2;
    //     printf("\n");
    // }
    s = 0;
    k = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s++;
        k = k - 2;
        printf("\n");
    }

    // reverse way

    // s = 0;
    // k = n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j <= s; j++)
    //     {
    //         printf();
    //     }

    //     s++;
    //     printf("\n");
    // }
    return 0;
}