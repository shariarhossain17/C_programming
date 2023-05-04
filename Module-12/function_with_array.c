#include <stdio.h>

void fun(int ar[], int n)
{
    // printf("ar is %p\n", &ar);
    // printf("ar is %d", *(ar + 1));
    for (int i = 0; i < n; i++)
    {
        printf("ar  value is %d\n", ar[i]);
    }
}
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    fun(ar, 5);
    return 0;
}