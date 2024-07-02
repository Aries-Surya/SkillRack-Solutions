#include <stdio.h>

int main() {
    int num = 9;
    for (int i = 1; i <= 9; i++) {
        printf("%d ", num * i); // Print each multiple followed by a space
    }
    printf("\n"); // Print a newline at the end after all multiples are printed

    return 0;
}
