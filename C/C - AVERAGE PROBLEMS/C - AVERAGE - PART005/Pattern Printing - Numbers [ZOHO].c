// 2670
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%d ", curr);
            curr = curr + (n - j);
        }
        printf("\n");
        curr = i + 2;
    }
}