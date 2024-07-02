#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];

    // Input the matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][C-1];  // Initialize max with the value of the first element in the diagonal
    int maxRow = 0, maxCol = C-1;  // Initialize row and column of max element

    // Find the maximum integer in the matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if (i == R-1-j && matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Print the diagonal elements with the maximum integer
    while(maxRow >= 0 && maxCol < C) {
        printf("%d ", matrix[maxRow][maxCol]);
        maxRow--;
        maxCol++;
    }

    return 0;
}
