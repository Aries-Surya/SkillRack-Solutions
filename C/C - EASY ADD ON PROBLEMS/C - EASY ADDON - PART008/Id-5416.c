#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int m[R][C];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d", &m[i][j]);

    // Sort the corner elements in clockwise order
    if(m[0][0] > m[0][C-1]) swap(&m[0][0], &m[0][C-1]);
    if(m[0][0] > m[R-1][C-1]) swap(&m[0][0], &m[R-1][C-1]);
    if(m[0][0] > m[R-1][0]) swap(&m[0][0], &m[R-1][0]);
    
    if(m[0][C-1] > m[R-1][C-1]) swap(&m[0][C-1], &m[R-1][C-1]);
    if(m[0][C-1] > m[R-1][0]) swap(&m[0][C-1], &m[R-1][0]);
    
    if(m[R-1][C-1] > m[R-1][0]) swap(&m[R-1][C-1], &m[R-1][0]);

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}