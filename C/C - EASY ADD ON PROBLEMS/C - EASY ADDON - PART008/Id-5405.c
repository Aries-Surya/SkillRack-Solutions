#include <stdio.h>
#include <string.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d", &matrix[i][j]);

    char S[101];
    scanf("%s", S);

    int k = 0;
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(matrix[i][j] == 0) {
                printf("%c ", S[k++]);
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
