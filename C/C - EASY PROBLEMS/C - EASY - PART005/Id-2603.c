#include <stdio.h>

int main() {
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &n);

    // Calculate the common difference
    int d = b - a;

    // Calculate the Nth term
    int nthTerm = a + (n - 1) * d;

    printf("%d", nthTerm);

    return 0;
}
