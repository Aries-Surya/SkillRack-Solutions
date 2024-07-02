#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    if(N > 0)
    {
        printf("POSITIVE ");
        if(N % 2 == 0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    else if(N < 0)
    {
        printf("NEGATIVE ");
        if(N % 2 == 0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    else
    {
        printf("ZERO");
    }
    return 0;
}


