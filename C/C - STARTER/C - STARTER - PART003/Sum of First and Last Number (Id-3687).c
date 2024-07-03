#include <stdio.h>

int main() {
    int numbers[5];  // Array to hold 5 numbers
    int i;

    // Read 5 numbers from input
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Compute the sum of first and last number
    int sum = numbers[0] + numbers[4];

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
