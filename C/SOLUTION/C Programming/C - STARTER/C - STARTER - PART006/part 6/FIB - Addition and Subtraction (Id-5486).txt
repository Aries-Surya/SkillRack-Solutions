#include <stdio.h>

int main()
{
    int X, Y;
    char CH;
    scanf("%d %d %c", &X, &Y, &CH);
    switch(CH)
    {
    case '+':
        printf("%d", X + Y);
        break;
    default:
        printf("%d", X - Y);
    }
    return 0;
}
