#include <stdio.h>

int main() {
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);

    int matrix[M][N];

    // Input for matrix
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Rotating the matrix
    int rotatedMatrix[N][M];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            rotatedMatrix[i][j] = matrix[j][N - i - 1];
        }
    }

    // Printing the rotated matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%d ", rotatedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
