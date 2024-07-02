#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int mat[N][N], colSumArr[N];
    for(int col=0; col<N; col++)
    {
        colSumArr[col]=0;
    }
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            scanf("%d",&mat[row][col]);
            colSumArr[col]=colSumArr[col]+mat[row][col];
        }
    }
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            printf("%d ",colSumArr[col]-mat[row][col]);
        }
        printf("\n");
    }
    return 0;
}
