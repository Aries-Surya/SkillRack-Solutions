#include<stdio.h>

int main()
{
    int N, value = 2, printCount = 0, cumulativeSum = 0;
    scanf("%d", &N);
    while(printCount < N)
    {
        int flag = 0;
        for(int ctr = 2; ctr <= sqrt(value); ctr++)
        {
            if(value % ctr == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cumulativeSum += value;
            printf("%d ", cumulativeSum);
            printCount++;
        }
        value++;
    }
    return 0;
}