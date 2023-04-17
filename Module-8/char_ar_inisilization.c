#include <stdio.h>
int main()
{
    char name[] = "shariar";

    int sz = sizeof(name) / sizeof(char);
    printf("%s %d", name, sz);

    return 0;
}