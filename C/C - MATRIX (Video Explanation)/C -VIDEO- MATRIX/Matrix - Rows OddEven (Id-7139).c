
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row=0; row<R; row++)
    {
        for(int col=0; col <C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    int topRow=0, bottomRow=R-1;
    while(topRow < bottomRow)
    {
        for(int col=0; col<C; col++)
        {
            if(matrix[topRow][col]%2 != matrix[bottomRow][col]%2)
            {
                printf("No");
                return 0;
            }
        }
        topRow++;
        bottomRow--;
    }
    printf("Yes");
    return 0;
}


