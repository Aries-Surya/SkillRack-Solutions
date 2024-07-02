#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int nextNum = N + 1;
    while (!isPrime(nextNum)) {
        nextNum++;
    }

    printf("%d", nextNum);

    return 0;
}
