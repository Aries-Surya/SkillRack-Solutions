// 213
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char day[4];
    int d;
    scanf("%s\n%d", day, &d);

    char days[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(days[i], day) == 0)
        {
            printf("%s", days[((i + d) % 7) - 1]);
            break;
        }
    }
}