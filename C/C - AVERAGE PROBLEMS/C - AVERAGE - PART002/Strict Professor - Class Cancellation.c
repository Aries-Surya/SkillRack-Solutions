// 2623

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int startHour, startMin;
    scanf("%d:%d", &startHour, &startMin);
    int hour, min;
    int classTime = startHour * 60 + startMin;
    int badStudent = 0;
    while (scanf("%d:%d", &hour, &min) == 2)
    {
        int arrivalTime = hour * 60 + min;
        if (arrivalTime > classTime)
            badStudent++;
    }
    if ((n - badStudent) >= m)
        printf("No");
    else
        printf("Yes");
}