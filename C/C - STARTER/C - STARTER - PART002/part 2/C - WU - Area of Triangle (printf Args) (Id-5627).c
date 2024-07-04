#include <stdio.h>

int main() {
    int base, height;
    scanf("%d %d", &base, &height);

    // Calculate the area of the triangle
    double area = 0.5 * base * height;

    // Print the area with precision up to 3 decimal places
    printf("%.3f\n", area);

    return 0;
}
