#include <stdio.h>

void fun(int a)
{
    a = 200;
    printf("a from fun %d\n", a);
}
int main()
{
    int x = 100;

    printf("x from main %d\n", x);
    fun(x);
    return 0;
}