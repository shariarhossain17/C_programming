#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", &str);

    int c_count = 0, s_count = 0;
    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] >= 65 && str[i] <= 90)
        {
            c_count++;
        }
        else
        {
            s_count++;
        }
    }

    printf("%d %d", c_count, s_count);
    return 0;
}