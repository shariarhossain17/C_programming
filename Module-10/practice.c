#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j--)
        {
            printf("%d ", j);
        }
        // s--;
        printf("\n");
    }
    return 0;
}