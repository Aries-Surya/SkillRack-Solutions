#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    // Calculate the absolute difference manually
    int difference;
    if (A > B) {
        difference = A - B;
    } else {
        difference = B - A;
    }

    // Print the absolute difference
    printf("%d\n", difference);

    return 0;
}
