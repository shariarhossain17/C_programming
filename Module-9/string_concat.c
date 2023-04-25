#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", &a, &b);

    int k = strlen(a);

    for (int i = 0; i < strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}