#include <stdio.h>

int main() {
    int T, I, D;

    // Read the number of terms, initial value, and the difference
    scanf("%d", &T);
    scanf("%d", &I);
    scanf("%d", &D);

    // Calculate and print the terms of the arithmetic progression
    for (int i = 0; i < T; i++) {
        printf("%d ", I + i * D);
    }
    printf("\n");

    return 0;
}
