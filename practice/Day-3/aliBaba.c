#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int resul1 = a + b * c;
    int resul2 = a + b - c;
    int result3 = a - b + c;
    int result4 = a - b * c;
    int result5 = a * b + c;
    int result6 = a * b - c;
    if (resul1 == d)
    {
        printf("YES");
    }
    else if (resul2 == d)
    {
        printf("YES");
    }
    else if (result3 == d)
    {
        printf("YES");
    }
    else if (result4 == d)
    {
        printf("YES");
    }
    else if (result5 == d)
    {
        printf("YES");
    }
    else if (result6 == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}