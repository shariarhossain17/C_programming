#include <stdio.h>
#include <string.h>

int is_palindrome(char ch[])
{
    int len = strlen(ch);
    int value = 1;
    int i = 0, j = len - 1;

    while (i < j)
    {

        if (ch[i] != ch[j])
        {
            value = 0;
        }
        i++;
        j--;
    }

    return value;
}
int main()
{
    char ch[100];
    scanf("%s", &ch);
    int value = is_palindrome(ch);

    if (value == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}