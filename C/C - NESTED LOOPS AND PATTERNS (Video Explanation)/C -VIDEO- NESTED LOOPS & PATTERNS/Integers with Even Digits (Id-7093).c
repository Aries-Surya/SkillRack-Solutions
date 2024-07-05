#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    int ctr, flag = 0;
    for(ctr = X; ctr <= Y; ctr++)
    {
        int currNum = ctr;
        while(currNum > 0 && currNum % 2 == 0)
        {
            currNum/=10;
        }
        if(currNum == 0)
        {
            printf("%d ", ctr);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("-1");
    }
    return 0;
}