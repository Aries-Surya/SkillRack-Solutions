// 220
#include <stdio.h>
#include <stdlib.h>

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", reverse(reverse(a) + reverse(b)));
}