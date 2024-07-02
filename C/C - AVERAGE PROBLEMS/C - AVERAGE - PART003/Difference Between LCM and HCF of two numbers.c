// 211
#include <stdio.h>
#include <stdlib.h>

int hcf(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    printf("%d", lcm(a, b) - hcf(a, b));
}