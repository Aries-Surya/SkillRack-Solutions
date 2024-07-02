#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int matrix[50][50];

    // Read the matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int K;
    scanf("%d", &K);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i < K && j < K) || (i < K && j >= N - K) || (i >= N - K && j < K) || (i >= N - K && j >= N - K)) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
