#include <stdio.h>
#include <math.h>

int main() {
    int radius;
    scanf("%d", &radius);

    // Calculate area using a more precise value of pi
    double pi = 22.0 / 7.0;  // This is a common approximation for pi
    double area = pi * radius * radius;

    // Print the area with 6 decimal places
    printf("%.6f\n", area);

    return 0;
}
