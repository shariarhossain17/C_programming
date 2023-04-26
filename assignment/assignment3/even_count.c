#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int even_cnt = 0;
    int odd_cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (ar[i] % 2 == 0)
        {
            even_cnt++;
        }
        else
        {

            odd_cnt++;
        }
    }

    printf("%d %d", even_cnt, odd_cnt);
    return 0;
}