#include<stdio.h>
int main()
{
    int row, col, N, ctr = 0;
    char ch;
    scanf("%d", &N);
    for(row = 0; row < N; row++)
    {
        for(col = 0; col <= row; ctr++,col++)
        {
            printf("%c ", (ctr % 2 == 0) ? (ctr % 26) + 'a' : (ctr % 26) + 'A');
        }
        printf("\n");
    }
}