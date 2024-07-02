#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            scanf("%d", &matrix[i][j]);

    int sum_second_lastbutone_row = 0;
    for(int j=0; j<N; j++)
        sum_second_lastbutone_row += matrix[1][j] + matrix[N-2][j];

    printf("%d", sum_second_lastbutone_row);

    return 0;
}
