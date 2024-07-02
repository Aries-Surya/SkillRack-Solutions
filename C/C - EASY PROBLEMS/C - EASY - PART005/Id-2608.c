#include <stdio.h>

int main() {
    int N1, N2;
    scanf("%d%d", &N1, &N2);

    int count = 0;
    for (int i = N1; i <= N2; i++) {
        if (i < 2) continue;
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
