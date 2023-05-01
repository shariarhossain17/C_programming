#include <stdio.h>

char small_to_capital(char c)
{

    int result;
    if (c >= 'a' && c <= 'z')
    {

        result = c - 32;
    }
    return result;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char result = small_to_capital(ch);
    printf("%c", result);
    return 0;
}