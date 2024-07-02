#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &C, &A, &B, &D); // Correct order based on example

    int R1 = A % B; // Remainder when A is divided by B
    int R2 = C % D; // Remainder when C is divided by D

    if (R2 == 0) {
        printf("Division by zero error\n");
    } else {
        int quotient = R1 / R2;
        printf("%d\n", quotient);
    }

    return 0;
}
