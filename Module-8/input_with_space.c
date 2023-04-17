#include <stdio.h>
#include <string.h>
int main()
{
    char name[16];
    fgets(name, 16, stdin);

    printf("%s", name);
    return 0;
}