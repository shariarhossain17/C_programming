#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int n = strlen(s);
    int value = 1;
    int i = 0, j = n - 1;

    while (i < j)

    {
        if (s[i] != s[j])
        {
            value = 0;
            break;
        }
        i++;
        j--;
    }

    if (value == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}