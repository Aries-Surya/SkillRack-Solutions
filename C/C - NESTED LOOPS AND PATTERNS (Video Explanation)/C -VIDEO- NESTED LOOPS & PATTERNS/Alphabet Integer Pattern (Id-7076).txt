#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;
    int X, Y;
    scanf("%c %d\n%c %d", &ch1, &X, &ch2, &Y);
    int ctr = X, max;
    while(ch1 <= ch2)
    {
        max = ch1 < ch2 ? 10 : Y;
        while(ctr <= max)
        {
            printf("%c%d ", ch1, ctr);
            ctr++;
        }
        ch1++;
        ctr = 1;
    }
    return 0;
}