#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100], string1[100];
    fgets(string, sizeof(string), stdin);
    fgets(string1, sizeof(string1), stdin);

    int sum1 = 0, sum2 = 0;
    int i = 0, j = 0;

    char *token = strtok(string, " ");
    while (token != NULL)
    {
        int num = atoi(token);
        if (num < 0)
        {
            printf("INVALIDINPUT");
            return 0;
        }
        sum1 += num;
        i++;
        token = strtok(NULL, " ");
    }

    token = strtok(string1, " ");

    while (token != NULL)
    {
        int num = atoi(token);
        if (num < 0)
        {
            printf("INVALIDINPUT");
            return 0;
        }
        sum2 += num;
        j++;
        token = strtok(NULL, " ");
    }

    int avg1 = sum1 / i, avg2 = sum2 / j;

    if (avg1 > avg2)
    {
        printf("%d", sum1);
    }
    else if (avg1 == avg2)
    {
        printf("%d", sum1 > sum2 ? sum1 : sum2);
    }
    else
        printf("%d", sum2);
}