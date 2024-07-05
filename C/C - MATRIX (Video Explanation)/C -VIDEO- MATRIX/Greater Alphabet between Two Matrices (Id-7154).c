#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    char matrix1[R][C], ch;
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf(" %c", &matrix1[row][col]);
        }
    }
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf(" %c", &ch);
            printf("%c ", (ch > matrix1[row][col]) ? ch : matrix1[row][col]);
        }
        printf("\n");
    }
    return 0;
}