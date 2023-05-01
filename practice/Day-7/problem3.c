#include <stdio.h>

int char_to_asci(char c)
{
    int result = c;
    return result;
}
int main()
{
    char c;
    scanf("%c", &c);
    int output = char_to_asci(c);
    printf("%d", output);
    return 0;
}