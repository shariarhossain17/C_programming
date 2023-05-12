#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c, d;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int result = a - (b + c + d);
        printf("%d\n", result);
    }

    return 0;
}