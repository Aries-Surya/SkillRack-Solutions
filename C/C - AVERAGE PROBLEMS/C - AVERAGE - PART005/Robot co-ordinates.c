#include <stdio.h>

int main()
{
    int x, y, distance;
    char direction;
    scanf("x%d y%d ", &x, &y);

    while (scanf(" %c%d ", &direction, &distance) == 2)
    {
        if (direction == 'N')
        {
            y += distance;
        }
        else if (direction == 'E')
        {
            x += distance;
        }
        else if (direction == 'S')
        {
            y -= distance;
        }
        else if (direction == 'W')
        {
            x -= distance;
        }
    }

    printf("x%d y%d\n", x, y);

    return 0;
}
