#include <stdio.h>


int main ()
{

    int a = 3, b = 20;
    int sum = a + b;
    int sub = a - b;
    int multiply = a * b;
    float devide = b*1.0 / a;
    int mod = a % b;
    // printf("%d",mod);
    printf("%d\n%d\n %d\n %f\n %d\n",sum,sub,multiply,devide,mod);
    return 0;
}