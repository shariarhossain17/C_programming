#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    int cnt[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        cnt[c - 'a']++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c - %d\n", i, cnt[i - 'a']);
    }
    return 0;
}