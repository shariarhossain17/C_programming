#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] == 0)
            {
                cnt++;
            }
        }
    }

    if ((row * col) == cnt)
    {
        printf("matrix");
    }
    else
    {
        printf("no matrix");
    }
    return 0;
}