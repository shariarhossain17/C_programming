#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num = INT_MAX, pos;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < num)
        {
            num = arr[i];
            pos = i + 1;
        }
    }

    printf("%d %d", num, pos);
    return 0;
}