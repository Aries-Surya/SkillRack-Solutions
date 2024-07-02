#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N, totalMark = 0;
    char ch;
    scanf("%d\n", &N);
    for(int ctr=1; ctr<=N; ctr++)
    {
        scanf("%c", &ch);
        if(ctr != N)
        {
            scanf(" ");
        }
        if(ch == 'R')
        {
            totalMark+=2;
        }
        else
        {
            totalMark--;
        }
    }
    printf("%d", totalMark);
    return 0;
}