#include <stdio.h>

int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}
int main()
{
    printf("%d", sum());
    return 0;
}