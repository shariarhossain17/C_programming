#include <stdio.h>
int main()
{
    int n, middle;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {
        middle = n / 2;
        printf("%d\n", middle);
        printf("%d %d", ar[middle - 1], ar[middle]);
    }
    else
    {
        middle = n / 2;
        printf("%d", ar[middle]);
    }
    return 0;
}