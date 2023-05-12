#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int i, small_alpha = 0, cap_alpha = 0, spaces = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            small_alpha++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cap_alpha++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Capital - %d\n", cap_alpha);
    printf("Small - %d\n", small_alpha);
    printf("Spaces - %d\n", spaces);
    return 0;
}