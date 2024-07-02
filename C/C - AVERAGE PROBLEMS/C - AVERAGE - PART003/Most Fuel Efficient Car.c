// 228
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    double mostEff = -1;
    int mostEffCar = -1;
    for (int i = 0; i < n; i++)
    {
        int fuel, distance;
        scanf("%d %d", &fuel, &distance);

        double eff = (double)distance / fuel;
        if (eff > mostEff)
        {
            mostEff = eff;
            mostEffCar = i;
        }
    }

    printf("%d", mostEffCar + 1);
}