#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int m[R][C];

    // Input the m
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int maxSum = 0;
    int maxCol = -1;

    // Calculate the sum of each column and find the column with maximum sum
    for(int j = 0; j < C; j++) {
        int sum = 0;
        for(int i = 0; i < R; i++) {
            sum += m[i][j];
        }
        if (sum >= maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }

    // Print the modified m without the column with maximum sum
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if (j != maxCol) {
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
