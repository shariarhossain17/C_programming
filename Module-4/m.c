#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (x >= 97 && x <= 122)
        {
            int ans = x - 32;
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}