#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];

    // Input the matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxPrimes = 0;
    int column = -1;

    // Find column with maximum prime numbers
    for(int j = 0; j < N; j++) {
        int primeCount = 0;
        for(int i = 0; i < N; i++) {
            if (isPrime(matrix[i][j])) {
                primeCount++;
            }
        }
        if (primeCount > maxPrimes) {
            maxPrimes = primeCount;
            column = j;
        }
    }

    // Print column or -1 if no prime numbers
    if (column == -1) {
        printf("-1\n");
    } else {
        for (int i = 0; i < N; i++) {
            printf("%d\n", matrix[i][column]);
        }
    }

    return 0;
}
