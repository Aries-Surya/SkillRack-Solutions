#include <stdio.h>

int main() {
    int N1, N2;

    // Read the two numbers
    scanf("%d %d", &N1, &N2);

    // Check if the numbers are unique
    if (N1 == N2) {
        printf("NOT UNIQUE\n");
    } else {
        printf("UNIQUE\n");
    }

    return 0;
}
