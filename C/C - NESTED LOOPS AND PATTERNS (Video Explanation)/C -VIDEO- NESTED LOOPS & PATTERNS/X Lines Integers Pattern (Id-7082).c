#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    int colCount = 1;
    for(int row=1; row<=X; row++)
    {
        int printVal = row*N;
        for(int col=1; col<=colCount; col++)
        {
            printf("%d ", printVal);
            printVal++;
        }
        printf("\n");
        colCount = colCount * 2;
    }
    return 0;
}