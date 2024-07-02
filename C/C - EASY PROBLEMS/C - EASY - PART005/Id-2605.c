#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = matrix[0][0] + matrix[0][N-1] + matrix[N-1][0] + matrix[N-1][N-1];
    printf("%d", sum);

    return 0;
}
