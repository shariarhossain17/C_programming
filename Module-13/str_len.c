#include <stdio.h>

int str_len(char ch[], int i)
{

    if (ch[i] == '\0')
        return 0;

    int l = str_len(ch, i + 1);
    return l + 1;
}
int main()
{
    char ch[100] = "Hello";
    int len = str_len(ch, 0);

    printf("len = %d", len);
    return 0;
}