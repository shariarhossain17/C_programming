#include <stdio.h>
void increment(int *x)
{
    (*x)++;
}
int main()
{
    int num = 10;
    increment(&num);
    printf("Value outside function: %d\n", num);
    return 0;
}

// Value outside function: 11
