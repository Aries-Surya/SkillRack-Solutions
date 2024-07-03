#include<stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if (X < Y)
    {
        printf("%d", X);  // X is less than Y
    }
    else
    {
        printf("%d", Y);  // Y is less than or equal to X
    }
    
    return 0;
}
