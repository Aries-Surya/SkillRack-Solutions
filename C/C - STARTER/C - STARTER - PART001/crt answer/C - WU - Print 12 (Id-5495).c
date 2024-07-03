#include <stdio.h>

int main() {
    int M = 5; // Initialize M to some value

    int N; // Declare variable N

    N = M + ++M; // Calculate N

    printf("%d", N); // Output the value of N

    return 0;
}
