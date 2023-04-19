#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100000];

    fgets(ar, 100001, stdin);

    int len = strlen(ar);

    for (int i = 0; i < len; i++)
    {
        if (ar[i] == ',')
        {
            ar[i] = ' ';
        }

        if (ar[i] >= 97 & ar[i] <= 122)
        {
            ar[i] -= 32;
        }
        else if (ar[i] >= 65 & ar[i] <= 90)
        {
            ar[i] += 32;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c", ar[i]);
    }

    return 0;
}