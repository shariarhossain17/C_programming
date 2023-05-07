#include <stdio.h>

int print_numbers(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i == N)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    print_numbers(N);
    return 0;
}