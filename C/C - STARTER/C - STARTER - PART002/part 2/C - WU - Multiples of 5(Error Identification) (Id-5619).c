#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);  // Print divisible numbers on the same line with space
        }
    }
    printf("\n");  // Print newline after all divisible numbers are printed

    return 0;
}
