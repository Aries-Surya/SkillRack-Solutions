#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, val = 1;
    scanf("%d", &N);
    int counter, counter1;
    for (counter = 1; counter <= N; counter++)
    {
        for (counter1 = 1; counter1 <= counter; counter1++)
        {
            printf("%d ", val);
            val++;
        }
        printf("\n");
    }
}
