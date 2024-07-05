#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2,N3;
    scanf("%d %d %d",&N1,&N2,&N3);
    if(N1 > N2)
    {
        int max=N1;
        N1=N2;
        N2=max;
    }
    for(int ctr=N1; ctr<=N2; ctr++)
    {
        if(ctr%N3==0)
        {
            printf("%d ",ctr);
        }
    }

    return 0;
}