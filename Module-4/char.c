#include <stdio.h>
int main()
{
    char str;

    scanf("%c", &str);

    if (str >= 97 && str <= 122)
    {
        int ans = str - 32;
        printf("%c", ans);
    }

    else
    {
        int ans = str + 32;
        printf("%c", ans);
    }
    return 0;
}