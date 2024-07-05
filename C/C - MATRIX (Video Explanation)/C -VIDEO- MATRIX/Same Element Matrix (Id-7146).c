#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d",&R,&C);
    int mat1[R][C], value;
    for(int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            scanf("%d",&mat1[row][col]);
        }
    }
    for(int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            scanf("%d",&value);
            if(value == mat1[row][col])
            {
                printf("T ");
            }
            else
            {
                printf("F ");
            }
        }
        printf("\n");
    }
    return 0;
}
