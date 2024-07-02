#include <stdio.h>

int main()
{
    int a, b;
    char o[1];
    scanf("%d%[^-0-9]%d", &a, o, &b);
    switch (toupper(o[0]))
    {
    case 'A':
        printf("%d", a + b);
        break;
    case 'S':
        printf("%d", a - b);
        break;
    case 'M':
        printf("%d", a * b);
        break;
    case 'D':
        printf("%d", a / b);
        break;
    }
}