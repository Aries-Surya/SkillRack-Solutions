#include <stdio.h>

int main() {
    int M, X;
    
    // Read the values of M and X
    scanf("%d %d", &M, &X);
    
    // Print the multiples of X from 1 to M
    for (int i = 1; i <= M; i++) {
        if (i % X == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
