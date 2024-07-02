#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    int sum = 0;
    if(X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }
    while(X <= Y)
    {
        sum += X;
        X++;
    }
    printf("%d", sum);
    return 0;
}