#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix1[R][C], matrix2[R][C];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d", &matrix1[i][j]);

    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d", &matrix2[i][j]);

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++)
            printf("%d ", matrix1[i][j] * matrix2[i][j]);
        printf("\n");
    }

    return 0;
}
