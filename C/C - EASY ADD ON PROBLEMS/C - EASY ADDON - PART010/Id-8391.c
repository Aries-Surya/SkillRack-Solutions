#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
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

    int minDistance = INT_MAX;

    // Traverse the matrix and find the minimum distance between two 1's
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(matrix[i][j] == 1) {
                for(int k = 0; k < N; k++) {
                    for(int l = 0; l < N; l++) {
                        if(matrix[k][l] == 1) {
                            int distance = abs(i - k) + abs(j - l);
                            if(distance != 0) {
                                minDistance = min(minDistance, distance);
                            }
                        }
                    }
                }
            }
        }
    }

    if(minDistance == INT_MAX) {
        minDistance = 0;
    }

    printf("%d", minDistance);

    return 0;
}
