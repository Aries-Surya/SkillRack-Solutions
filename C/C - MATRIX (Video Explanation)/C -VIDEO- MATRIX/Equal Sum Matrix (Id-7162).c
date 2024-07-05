
#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N], rowSum[N], colSum[N], diagonalSum = 0;
    for(int index = 0; index < N; index++)
    {
        rowSum[index] = 0;
        colSum[index] = 0;
    }
    for(int row = 0; row < N; row++)
    {
        for(int col = 0; col < N; col++)
        {
            scanf("%d", &matrix[row][col]);
            rowSum[row] += matrix[row][col];
            colSum[col] += matrix[row][col];
            if(row == col)
            {
                diagonalSum += matrix[row][col];
            }
        }
    }
    for(int index = 0; index < N; index++)
    {
        if(diagonalSum != rowSum[index] || diagonalSum != colSum[index])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
