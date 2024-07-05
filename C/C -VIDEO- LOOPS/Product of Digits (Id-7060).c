#include<stdio.h>

int main()
{
    int N, product = 1;
    scanf("%d", &N);
    while(N > 0)
    {
        product*= N % 10;
        N/= 10;
    } 
    printf("%d", product);
    return 0;
}
