#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int N;
    scanf("%llu",&N);
    int printFlag=0;
    while(N>0)
    {
        if((N%10==2) || (N%10==3) || (N%10==5) || (N%10==7))
        {
            printFlag=1;
            printf("%d",N%10);
        }
        N/=10;
    }
    if(printFlag==0)
    {
        printf("-1");
    }
    return 0;
}
