#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int row, col, diff, printVal = N;
    for(row = 1; row <= N; row++)
    {
        diff = (row % 2 != 0) ? 2 : 3;
        for(col = 1; col <= N; col++)
        {
            printf("%d ", printVal);
            printVal += diff;
        }
        (row % 2 != 0) ? printVal++ : printVal--;
        printf("\n");
    }
    return 0;
}