#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Find the next multiple of 10 greater than N
    int next_multiple_of_10 = N + (10 - N % 10);

    printf("%d\n", next_multiple_of_10);

    return 0;
}
