// 238

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int country[n][100], capital[n][100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", country[i], capital[i]);
    }
    char find[100];
    scanf("%s", find);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(country[i], find) == 0)
        {
            printf("%s", capital[i]);
            return;
        }
    }
    printf("NONE");
}