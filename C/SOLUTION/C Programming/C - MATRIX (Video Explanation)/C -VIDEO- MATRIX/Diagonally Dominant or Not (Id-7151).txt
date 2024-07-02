#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    for(int row=0; row<N; row++)
    {
        int sum = 0;
        for(int col=0; col<N; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(row != col)
            {
                sum += abs(matrix[row][col]);
            }
        }
        if(abs(matrix[row][row]) < sum)
        {
            printf("No");
            return 0;
        }
    }
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}