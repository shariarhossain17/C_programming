#include <stdio.h>

void world()
{
    printf("World start\n");
    printf("world end\n");
}
void hello()
{
    printf("Hello Start\n");

    world();
    printf("hello end\n");
}
int main()
{
    printf("Hello Main\n");

    hello();

    printf("main end\n");
    return 0;
}