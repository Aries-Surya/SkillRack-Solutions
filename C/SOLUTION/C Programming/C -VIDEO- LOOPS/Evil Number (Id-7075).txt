#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, binaryOnesCount = 0;
    scanf("%d", &N);
    while(N > 0)
    {
        binaryOnesCount += (N % 2);
        N /= 2;
    }
    printf((binaryOnesCount % 2 ==  0 ) ? "Yes" : "No");
    return 0;
}


