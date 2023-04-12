#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int lastDigit = x % 10;
    int firstDigit = x / 10;

    if (lastDigit < firstDigit)
    {
        if ((firstDigit % lastDigit) == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    else
    {
        if ((lastDigit % firstDigit) == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}