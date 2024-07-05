#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int ctr = 1; ctr <= N; ctr++)
    {
        unsigned long long int val;
        scanf("%llu", &val);
        int onesCount = 0, zerosCount = 0;
        while(val > 0)
        {
            if(val % 10 == 1)
            {
                onesCount++;
            }
            else
            {
                zerosCount++;
            }
            val = val / 10;
        }
        printf("%d %d\n", onesCount, zerosCount);
    }
    return 0;
}