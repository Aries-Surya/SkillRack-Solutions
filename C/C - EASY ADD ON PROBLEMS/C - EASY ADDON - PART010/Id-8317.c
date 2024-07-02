#include <stdio.h>

int main() {
    int R, C, K;
    scanf("%d %d %d", &R, &C, &K);
    int m[100][100];

    // Read the m elements
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int fox = -1, foy = -1;
    int sox = -1, soy = -1;

    // Find the first two occurrences of K
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (m[i][j] == K) {
                if (fox == -1) {
                    fox = i;
                    foy = j;
                } else if (sox == -1) {
                    sox = i;
                    soy = j;
                }
            }
        }
    }

    if (fox == -1 || sox == -1) {
        printf("K not found twice in the m.\n");
        return 0;
    }

    // Determine the bounds of the sub-m
    int min_row = fox < sox ? fox : sox;
    int max_row = fox > sox ? fox : sox;
    int min_col = foy < soy ? foy : soy;
    int max_col = foy > soy ? foy : soy;

    // Print the sub-m
    for (int i = min_row; i <= max_row; i++) {
        for (int j = min_col; j <= max_col; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
