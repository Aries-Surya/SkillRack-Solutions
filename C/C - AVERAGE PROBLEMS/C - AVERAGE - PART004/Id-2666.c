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

    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += matrix[i][i];
        sum += matrix[i][N - 1 - i];
    }

    // If N is odd, one element will be added twice, so we subtract it
    if(N % 2 == 1) {
        sum -= matrix[N/2][N/2];
    }

    printf("%d\n", sum);

    return 0;
}
