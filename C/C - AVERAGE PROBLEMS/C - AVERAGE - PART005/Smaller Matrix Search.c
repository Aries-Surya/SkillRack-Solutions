#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    int bigMatrix[N][N];
    int smallMatrix[M][M];

    // Input for big matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &bigMatrix[i][j]);
        }
    }

    // Input for small matrix
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &smallMatrix[i][j]);
        }
    }

    // Search for small matrix in big matrix
    int found = 0;
    for(int i = 0; i <= N - M; i++) {
        for(int j = 0; j <= N - M; j++) {
            int match = 1;
            for(int p = 0; p < M; p++) {
                for(int q = 0; q < M; q++) {
                    if(bigMatrix[i + p][j + q] != smallMatrix[p][q]) {
                        match = 0;
                        break;
                    }
                }
                if(!match) break;
            }
            if(match) {
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(found) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
