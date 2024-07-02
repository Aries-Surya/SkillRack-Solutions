#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d", &matrix[i][j]);

    int max_odd_count = 0;
    int max_odd_row = 0;

    for(int i=0; i<R; i++) {
        int odd_count = 0;
        for(int j=0; j<C; j++)
            if(matrix[i][j] % 2 != 0)
                odd_count++;

        if(odd_count > max_odd_count) {
            max_odd_count = odd_count;
            max_odd_row = i;
        }
    }

    for(int j=0; j<C; j++)
        printf("%d ", matrix[max_odd_row][j]);

    return 0;
}
