#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N], row, col;
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N-row; col++)
        {
            scanf("%d", &matrix[row][col]);
            printf("%d ", matrix[row][col]);
        }
        for(int invertRow = row-1; invertRow >= 0; invertRow--)
        {
            printf("%d ", matrix[invertRow][N-row-1]);
        }
        printf("\n");
    }
    return 0;
}