#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N, flag = 0;
    scanf("%d", &N);
    int matrix[N][N], row, col;
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    int X, xRow, xCol, count = 0;
    scanf("%d", &X);
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            if(X == matrix[row][col])
            {
                xRow = row;
                xCol = col;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
    if(flag == 0)
    {
        printf("-1");
        return 0;
    }
    //Traverse top
    for(row=xRow-1; row >= 0; row--)
    {
        if(matrix[row][xCol] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse top right
    for(row=xRow-1, col = xCol+1; row >= 0 && col < N; row--, col++)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse right
    for(col=xCol+1; col < N; col++)
    {
        if(matrix[xRow][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse bottom right
    for(row=xRow+1, col = xCol+1; row < N && col < N; row++, col++)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse bottom
    for(row=xRow+1; row < N; row++)
    {
        if(matrix[row][xCol] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse bottom left
    for(row=xRow+1, col = xCol-1; row < N && col >= 0; row++, col--)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse left
    for(col=xCol-1; col >= 0; col--)
    {
        if(matrix[xRow][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse top left
    for(row=xRow-1, col = xCol-1; row >= 0 && col >= 0; row--, col--)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}