#include<stdio.h>

int main()
{
    int N1, N2;
    scanf("%d %d", &N1, &N2);
    for(int ctr = N1; ctr <= N2; ctr++)
    {
        if(ctr % 2 != 0 && ctr % 5 == 0)
        {
            printf("%d ", ctr);
        }
    }
    return 0;
}