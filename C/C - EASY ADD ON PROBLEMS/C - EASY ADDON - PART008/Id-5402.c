#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            scanf("%d", &matrix[i][j]);

    int sum_first_last_row = 0;
    for(int j=0; j<N; j++)
        sum_first_last_row += matrix[0][j] + matrix[N-1][j];

    printf("%d", sum_first_last_row);

    return 0;
}
