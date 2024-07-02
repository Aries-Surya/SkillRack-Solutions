#include<stdio.h>

int main()
{
    char ch1, ch2;
    int X;
    scanf("%c %c %d", &ch1, &ch2, &X);
    if(ch1%10 + ch2%10 == X || abs(ch1%10 - ch2%10) == X)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}


