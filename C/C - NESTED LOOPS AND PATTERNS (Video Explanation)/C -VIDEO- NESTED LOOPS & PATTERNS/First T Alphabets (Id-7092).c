#include<stdio.h>
int main()
{
    int N, currNum;
    scanf("%d", &N);
    for(int ctr = 1; ctr <= N; ctr++)
    {
        scanf("%d", &currNum);
        char ch = 'a';
        while(ch < 'a' + currNum)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}