#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    double totalAmount = 0.0;

    for (int i = 0; i < n; i++)
    {
        int labelPrice;
        double discount = 0.0;
        scanf("%d", &labelPrice);

        if (labelPrice >= 1000)
            discount = 0.50;
        else if (labelPrice > 500)
            discount = 0.25;
        else if (labelPrice > 400)
            discount = 0.20;

        totalAmount += labelPrice - (labelPrice * discount);
    }
    if (totalAmount > 2000)
        totalAmount -= 100;
    printf("%.2lf", totalAmount);
}