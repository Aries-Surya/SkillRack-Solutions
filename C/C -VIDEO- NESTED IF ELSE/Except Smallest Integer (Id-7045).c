#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2, N3;
    scanf("%d %d %d",&N1,&N2,&N3);
    if(N1<N2 && N1<N3)
    {
        printf("%d %d",N2,N3);
    }
    else if(N2<N3)
    {
        printf("%d %d",N1,N3);
    }
    else
    {
        printf("%d %d",N1,N2);
    }
    return 0;
}