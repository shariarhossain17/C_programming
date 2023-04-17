#include <stdio.h>
#include <string.h>
int main()
{
    int arr[100];

    scanf("%s", &arr);

    int len = strlen(arr);
    printf("%d", len);
    // int i = 0, count = 0;
    // while (arr[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // printf("%d", count);
    return 0;
}