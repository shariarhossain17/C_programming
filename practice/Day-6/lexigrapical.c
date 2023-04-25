#include <stdio.h>
int main()
{
    char x[100];
    char y[100];
    scanf("%s", &x);
    scanf("%s", &y);

    int i = 0;
    while (1)
    {
        if (x[i] == '\0' && y[i] == '\0')
        {
            printf("%s", x);
            break;
        }
        else if (x[i] == '\0')
        {
            printf("%s", x);
            break;
        }
        else if (y[i] == '\0')
        {
            printf("%s", y);
            break;
        }

        if (x[i] == y[i])
        {
            i++;
        }
        else if (x[i] < y[i])
        {
            printf("a is small");
            break;
        }

        else
        {
            printf(" B is small");
            break;
        }
    }
    return 0;
}
