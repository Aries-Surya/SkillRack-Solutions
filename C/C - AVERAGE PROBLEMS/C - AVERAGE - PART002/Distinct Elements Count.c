
// 2624

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2;
    scanf("%d %d", &l1, &l2);

    int arr1[l1], arr2[l2];

    for (int i = 0; i < l1; i++)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < l2; i++)
        scanf("%d", &arr2[i]);

    int i, j, distACount = 0, distBCount = 0;

    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < l2; j++)
        {

            if (arr1[i] == arr2[j])
                break;
        }
        if (j >= l2)
            distACount++;
    }

    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < l1; j++)
        {
            if (arr1[j] == arr2[i])
                break;
        }
        if (j >= l1)
            distBCount++;
    }

    printf("%d", distACount + distBCount);
}