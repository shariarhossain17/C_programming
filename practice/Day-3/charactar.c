#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch == 122)
    {
        int ans = 97;
        printf("%c", ans);
    }
    else if (ch >= 97 && ch < 122)
    {
        int ans = ch + 1;
        printf("%c", ans);
    }
    return 0;
}