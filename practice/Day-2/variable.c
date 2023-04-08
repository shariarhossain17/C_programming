#include <stdio.h>

int main()
{
    int num, num2;
    scanf("%d %d", &num, &num2);
    int sum = num + num2;
    int sub = num - num2;
    int mul = num * num2;
    int devide = num / num2;
    int divisle = num % num2;

    printf("%d\n %d\n %d\n %d\n %d\n", sum, sub, mul, devide, divisle);
    return 0;
}