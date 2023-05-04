#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    int *ptr2 = ptr;
    // printf("x address is = %p\n", &x);
    // printf("ptr value is = %p\n", ptr);
    // printf("ptr address is = %p\n", &ptr);

    // dereference

    // x = 200;

    // *ptr = 300;

    *ptr2 = 300;

    printf("x value is %d", *ptr);
    return 0;
}