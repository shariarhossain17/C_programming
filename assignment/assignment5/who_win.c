#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x, y;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if (x < y)
        {
            a++;
        }
        else if (x > y)
        {
            b++;
        }
    }

    if (a == b)
    {
        printf("Draw");
    }
    else if (a > b)
    {
        printf("Pathan");
    }
    else
    {
        printf("Tiger");
    }

    return 0;
}