#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int largest = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        if (largest < x)
        {
            largest = x;
        }
    }
    printf("%d\n", largest);
    return 0;
}