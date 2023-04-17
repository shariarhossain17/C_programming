#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100000];
    fgets(ar, 100001, stdin);

    int i = 0;
    while (ar[i] != '\\')
    {
        printf("%c", ar[i]);
        i++;
    }
    return 0;
}