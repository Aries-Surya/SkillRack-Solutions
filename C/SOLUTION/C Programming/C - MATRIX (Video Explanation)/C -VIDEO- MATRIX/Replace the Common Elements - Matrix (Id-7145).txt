#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row, col, N, count[100]= {0};
    scanf("%d", &N);
    int mat[N][N];
    for(row = 0; row <N ; row++)
    {
        for(col = 0; col < N; col++)
        {
            scanf("%d", &mat[row][col]);
            if(count[mat[row][col]] == row)
            {
                count[mat[row][col]]++;
            }
        }
    }
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            if(count[mat[row][col]] == N)
            {
                mat[row][col] = -1;
            }
            printf("%d ", mat[row][col]);

        }
        printf("\n");

    }
}
