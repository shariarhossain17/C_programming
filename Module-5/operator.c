#include <stdio.h>
int main()
{
    int x = 10;
    int y = ++x; // pre increment
    printf("x-%d y-%d", x, y);
    return 0;
}