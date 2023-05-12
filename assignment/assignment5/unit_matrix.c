#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int row = n, col = n;
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j && ar[i][j] != 1)
            {
                printf("NO\n");
                return 0;
            }
            if (i != j && ar[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}