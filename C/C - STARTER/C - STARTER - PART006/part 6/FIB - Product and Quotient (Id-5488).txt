#include <stdio.h>
#include <ctype.h>

int main()
{
    int X, Y;
    char CH;
    scanf("%d %d %c", &X, &Y, &CH);
    CH = toupper(CH);
    switch(CH)
    {
    case 'M':
        printf("%d", X * Y);
        break;
    default:
        printf("%d", X / Y);
    }
    return 0;
}
