#include <stdio.h>

int main() {
    int S;
    scanf("%d", &S);
    
    int M1[S][S], M2[S][S];
    
    // Input and sum of matrices M1 and M2
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            scanf("%d", &M1[i][j]);
        }
    }
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            scanf("%d", &M2[i][j]);
            M1[i][j] += M2[i][j];
        }
    }
    
    // Output the sum matrix M1
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
