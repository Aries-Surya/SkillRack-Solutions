#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int N;
    int min=INT_MAX,max=INT_MIN;
    scanf("%d",&N);
    for(int ctr=1; ctr<=N; ctr++)
    {
        int currInt;
        scanf("%d",&currInt);
        if(currInt < min)
        {
            min=currInt;
        }
        else if(currInt > max)
        {
            max=currInt;
        }
    }
    printf("%d %d",min,max);
    return 0;
}


