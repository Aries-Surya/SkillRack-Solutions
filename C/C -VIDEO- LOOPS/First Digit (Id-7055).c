#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, flag  = 0;
    scanf("%d", &N);
    if(N < 0)
    {
        N = N * -1;
        flag = 1;
    }
    while(N > 10)
    {
        N = N/10;
    }
    if(flag == 0)
    {
        printf("%d", N);
    }
    else
    {
        printf("-%d", N);
    }
    return 0;
}
