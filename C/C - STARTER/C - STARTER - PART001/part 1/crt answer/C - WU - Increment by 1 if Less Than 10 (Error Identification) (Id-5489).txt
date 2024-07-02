#include <stdio.h>

void main() {
    int N;

    // Read an integer input
    scanf("%d", &N);

    // Check the condition
    if (N < 10) {
        // If N is less than 10, print N + 1
        printf("%d\n", N + 1);
    } else {
        // If N is 10 or greater, print N - 1
        printf("%d\n", N - 1);
    }

    return 0;
}
