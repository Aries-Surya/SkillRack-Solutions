#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if (X > Y)
    {
        printf("%d", X);  // X is greater than Y
    }
    else
    {
        printf("%d", Y);  // Y is greater than or equal to X
    }
    
    return 0;
}
