#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++)
            {scanf("%d", &matrix[i][j]);}}

    for(int j=0; j<C; j+=2){
        for(int i=0; i<R/2; i++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[R-i-1][j];
            matrix[R-i-1][j] = temp;
        }}

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
