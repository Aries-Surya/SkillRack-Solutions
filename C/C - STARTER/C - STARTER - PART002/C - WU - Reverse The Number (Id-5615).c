#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10;    // Extract the last digit
        printf("%d", digit);       // Print the last digit
        number /= 10;              // Remove the last digit from number
    }
    printf("\n");                 // Print a newline after all digits are printed

    return 0;
}
