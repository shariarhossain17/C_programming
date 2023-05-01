#include <stdio.h>

char capital_to_small(char c)
{
    char result;
    if (c >= 65 && c <= 90)
    {
        result = c + 32;
    }

    return result;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char result = capital_to_small(ch);
    printf("%c", result);
    return 0;
}