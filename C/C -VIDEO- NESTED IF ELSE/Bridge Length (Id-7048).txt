#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    scanf("%d", &X);
    if(X >= 50)
    {
        printf("VERY LARGE");
    }
    else if(X >= 20)
    {
        printf("LARGE");
    }
    else if(X >= 10)
    {
        printf("MEDIUM");
    }
    else
    {
        printf("SMALL");
    }
    return 0;
}