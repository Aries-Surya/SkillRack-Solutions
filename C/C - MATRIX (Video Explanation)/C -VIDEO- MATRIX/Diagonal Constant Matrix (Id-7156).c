#include<stdio.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(row > 0 && col > 0)
            {
                if(matrix[row][col] != matrix[row - 1][col - 1])
                {
                    printf("NO");
                    return 0;
                }
            }
        }
    }
    printf("YES");
    return 0;
}


