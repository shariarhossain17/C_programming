#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int max = INT_MAX, pos = 0;
    int min = INT_MIN, mpos = 0;
    for (int i = 0; i < n; i++)
    {
        if (max > ar[i])
        {
            max = ar[i];
            pos = i;
        }

        if (min < ar[i])
        {
            min = ar[i];
            mpos = i;
        }
    }

    int temp = ar[pos];

    ar[pos] = ar[mpos];
    ar[mpos] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}