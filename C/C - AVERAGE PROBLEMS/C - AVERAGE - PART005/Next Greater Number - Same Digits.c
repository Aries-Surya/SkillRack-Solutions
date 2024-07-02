// 2673
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, l, j, k, m;
    char string[100];
    scanf("%s", string);

    l = strlen(string);
    int a[l];
    for (i = 0; i < l; i++)
        a[i] = string[i] - '0';

    for (i = l - 1; i > 0; i--)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j] - (a[j] = a[i]);
                for (k = j + 1; k < l; k++)
                {
                    for (m = k + 1; m < l; m++)
                    {
                        if (a[k] > a[m])
                            a[k] = a[k] + a[m] - (a[m] = a[k]);
                    }
                }
                break;
            }
        }
        if (j >= 0)
            break;
    }

    if (j >= 0)
    {
        for (int i = 0; i < l; i++)
            printf("%d", a[i]);
    }
}