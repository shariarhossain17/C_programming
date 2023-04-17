#include <stdio.h>
int main()
{
    char s[100];
    char t[100];
    scanf("%s", &s);
    scanf("%s", &t);
    int i = 0, s_count = 0, t_count = 0;

    while (s[i] != '\0')
    {
        s_count++;
        i++;
    }
    while (t[i] != '\0')
    {
        t_count++;
        i++;
    }

    printf("%d %d\n", s_count, t_count);
    printf("%s %s", s, t);
    return 0;
}