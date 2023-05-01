#include <stdio.h>
int main()
{
    int n, s, k, s1, k1;
    scanf("%d", &n);

    s = n - 1;
    k = 1;
    s1 = 0;
    k1 = (n * 2) - 1;
    for (int i = 1; i <= n * 2; i++)
    {

        if (i <= n)
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            s--;
            k = k + 2;
        }

        else if (i >= n)
        {
            for (int j = 1; j <= s1; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= k1; j++)
            {
                printf("*");
            }
            s1++;
            k1 = k1 - 2;
        }

        printf("\n");
    }
    return 0;
}