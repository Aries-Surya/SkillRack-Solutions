#include <stdio.h>

int main() {
    int A, B, C;

    // Read three integers from input
    scanf("%d %d %d", &C, &A, &B);

    // Subtract A from C and then multiply by B
    int result = (C - A) * B;

    // Print the result
    printf("%d\n", result);

    return 0;
}
