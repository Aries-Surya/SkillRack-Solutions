#include<stdio.h>

int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    if(X > 5000)
    {
        printf("%.2f", X * 0.75);
    }
    else if(X > 2000)
    {
        if(Y > 20)
        {
            printf("%.2f", X * 0.8);
        }
        else
        {
            printf("%.2f", X * 0.85);
        }
    }
    else
    {
        if(Y > 10)
        {
            printf("%.2f", X * 0.9);
        }
        else
        {
            printf("%.2f", X * 0.95);
        }
    }
    return 0;
}