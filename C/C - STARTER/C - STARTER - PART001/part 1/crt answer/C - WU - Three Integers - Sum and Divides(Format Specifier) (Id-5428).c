#include <stdio.h>

int main() {
    int A, B, C;

    // Read three integers from input
    scanf("%d %d %d", &A, &B, &C);

    // Add A and B, then divide the sum by C
    int result = (A + B) / C;

    // Print the result
    printf("%d\n", result);

    return 0;
}
