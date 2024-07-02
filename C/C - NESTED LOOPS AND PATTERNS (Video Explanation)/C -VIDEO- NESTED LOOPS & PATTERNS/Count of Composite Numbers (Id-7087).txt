#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, count = 0;
    scanf("%d", &N);
    for(int val = 2; val <= N; val++)
    {
        double sqrtVal = sqrt(val);
        for(int ctr = 2; ctr <= sqrtVal; ctr++)
        {
            if(val % ctr == 0)
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}