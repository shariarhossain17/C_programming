#include <stdio.h>
int main()
{

    int i, x;
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        int n;
        scanf("%d", &n);

        do
        {
            printf("%d ", n % 10);
            n = n / 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}