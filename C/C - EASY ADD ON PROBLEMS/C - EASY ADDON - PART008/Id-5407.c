#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            scanf("%d", &matrix[i][j]);

    int max_column_sum = 0;
    for(int j=0; j<N; j++) {
        int column_sum = 0;
        for(int i=0; i<N; i++)
            column_sum += matrix[i][j];
        if(column_sum > max_column_sum)
            max_column_sum = column_sum;
    }

    printf("%d", max_column_sum);

    return 0;
}
