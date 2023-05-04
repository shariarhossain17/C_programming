#include <stdio.h>

void fun(int *p)
{
    *p = 500;
    printf("p value is %d\n", *p);
}
int main()
{
    int x = 100;
    fun(&x);
    printf("x address is %d\n", x);

    return 0;
}