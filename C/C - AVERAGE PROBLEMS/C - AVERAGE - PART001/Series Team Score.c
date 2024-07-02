// 2621

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scores[201];

    int ind = 0;
    while (scanf("%d", &scores[ind++]) == 1)
        ;
    ind--;
    int mid = ind / 2;
    int pointA = 0, pointB = 0;
    for (int i = 0; i < mid; i++)
    {
        int scoreA = scores[i];
        int scoreB = scores[i + mid];

        if (scoreA > scoreB)
        {
            pointA += 3;
        }
        else if (scoreA == scoreB)
        {
            pointA += 1;
            pointB += 1;
        }
        else
            pointB += 3;
    }
    printf("%d %d", pointA, pointB);
}
