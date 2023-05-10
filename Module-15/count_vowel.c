#include <stdio.h>

int fun(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    int ans = fun(str, i + 1);

    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] + 32;
    }

    if (str[i] == 'a')
    {
        return ans + 1;
        printf("%c", str[i]);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[205];
    fgets(s, 205, stdin);
    int cnt = fun(s, 0);
    printf("%d", cnt);
    return 0;
}