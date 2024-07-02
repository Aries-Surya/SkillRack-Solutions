#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2;
    scanf("%d %d",&N1,&N2);
    if((N1/10%10)>(N2/10%10) && (N1%10<N2%10))
    {
        printf("%d",N1-N2);
    }
    else
    {
        printf("%d",N1*N2);
    }
    return 0;
}


