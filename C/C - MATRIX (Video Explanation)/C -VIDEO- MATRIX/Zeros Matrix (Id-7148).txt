#include<stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C], zeroRows[R], zeroColumns[C];
    for(int row=0; row<R; row++)
    {
        zeroRows[row] = 0;
    }
    for(int col=0; col<C; col++)
    {
        zeroColumns[col] = 0;
    }
    for(int row=0; row<R; row++)
    {
        for(int col=0; col<C; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(matrix[row][col] == 0)
            {
                zeroRows[row] = 1;
                zeroColumns[col] = 1;
            }
        }
    }
    for(int row=0; row<R; row++)
    {
        for(int col=0; col<C; col++)
        {
            if(zeroRows[row] == 1 || zeroColumns[col] == 1)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", matrix[row][col]);
            }
        }
        printf("\n");
    }
    return 0;
}