#include <stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    // printf("address of ar %p\n", ar);
    // printf("address of ar %p", &ar);

    // printf("ar value is %d\n", *ar);
    // printf("ar value is %d", ar[0]);
    printf("ar value is %d\n", *(ar + 1));
    printf("ar value is %d", ar[1]);
    return 0;
}