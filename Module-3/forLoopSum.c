#include <stdio.h>

int main(void)
{
    // int sum = 0;
    // int i;
    // for (i = 1; i <= 5; i++)
    // {
    //     sum += i;
    // }
    // printf("%d", sum);
    long long int sum = 0;
    int i, num;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}