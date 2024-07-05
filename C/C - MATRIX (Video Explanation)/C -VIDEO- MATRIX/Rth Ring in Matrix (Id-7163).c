#include<stdio.h>

int main()
{
    int N, row, col, R;
    scanf("%d", &N);
    int matrix[N][N];
    for (row=0; row<N; row++)
    {
        for (col=0; col<N; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    scanf("%d", &R);
    for (row=0; row<N; row++)
    {
        for (col=0; col<N; col++)
        {
            if((row == R-1 && col >= R-1 && col <= N-R)||
               (col == R-1 && row >= R-1 && row <= N-R)||
               (row == N-R && col >= R-1 && col <= N-R)||
               (col == N-R && row >= R-1 && row <= N-R))
            {
                printf("%d ", matrix[row][col]);
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }
    return 0;
}
