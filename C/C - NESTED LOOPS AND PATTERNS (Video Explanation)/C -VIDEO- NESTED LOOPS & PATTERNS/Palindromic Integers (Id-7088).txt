#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, printed = 0;
    scanf("%d", &N);
    for(int ctr = 1; ctr <= N; ctr++)
    {
        int num, currNum, revNum = 0;
        scanf("%d", &num);
        currNum = num;
        while(num > 0)
        {
            revNum = (revNum * 10) + (num % 10);
            num = num / 10;
        }
        if(currNum == revNum)
        {
            printed = 1;
            printf("%d\n", currNum);
        }
    }
    if(printed == 0)
    {
        printf("-1");
    }
    return 0;
}


