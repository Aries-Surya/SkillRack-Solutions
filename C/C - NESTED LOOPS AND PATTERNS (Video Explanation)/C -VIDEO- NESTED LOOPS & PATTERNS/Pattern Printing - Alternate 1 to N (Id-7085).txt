#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int decreaseVal=N,increaseVal=1;
    for(int rowCtr=1; rowCtr<=N; rowCtr++)
    {
        int printVal=(rowCtr%2!=0)?(increaseVal++):(decreaseVal--);
        for(int colCtr=1; colCtr<=N; colCtr++)
        {
            printf("%d",printVal);
        }
        printf("\n");
    }
    return 0;
}