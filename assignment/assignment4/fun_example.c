#include <stdio.h>
// no return + no parameter

void no_return_no_parameter()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    no_return_no_parameter();
    return 0;
}