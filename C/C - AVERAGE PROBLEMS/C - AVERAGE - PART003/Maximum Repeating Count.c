// 229
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int arr[200];
    int ind = 0;
    while (scanf("%d", &arr[ind++]) == 1)
        ;
    int minCount = 0, minElem = INT_MIN;
    for (int i = 0; i < ind; i++)
    {
        int count = 0;
        for (int j = i; j < ind; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > minCount)
        {
            minCount = count;
            if (minElem <= arr[i])
                minElem = arr[i];
        }
    }
    printf("%d", minElem);
}