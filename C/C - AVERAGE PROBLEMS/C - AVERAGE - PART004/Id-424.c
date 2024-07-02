#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumDiag1 = 0, sumDiag2 = 0;
    
    for(int i = 0; i < N; i++) {
        sumDiag1 += matrix[i][i];
        sumDiag2 += matrix[i][N - 1 - i];
    }

    int absoluteDifference = abs(sumDiag1 - sumDiag2);

    printf("%d\n", absoluteDifference);

    return 0;
}
