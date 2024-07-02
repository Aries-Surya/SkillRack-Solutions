#include <stdio.h>
#include <stdlib.h>

int main()
{
    int left, right, result;
    char op;
    scanf("%d%c%d=%d", &left, &op, &right, &result);

    if (left + right == result)
        printf("+");
    else if (left - right == result)
        printf("-");
    else if (left * right == result)
        printf("*");
    else
        printf("/");
}