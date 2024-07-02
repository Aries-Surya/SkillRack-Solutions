#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int row = 1; row <= N; row++)
    {
        for(int col = 1; col <= N; col++)
        {
            printf("%d ", row * col);
        }
        printf("\n");
    }
    return 0;
}