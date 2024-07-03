#include<stdio.h>

int main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);

    // Print the product with precision up to two decimal places
    printf("%.2f\n", num1 * num2);

    return 0;
}
