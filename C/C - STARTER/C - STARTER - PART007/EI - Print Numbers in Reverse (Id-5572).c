#include<stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    
    // Printing from Y to X
    for(int ctr = Y; ctr >= X; ctr--) {
        printf("%d ", ctr);
    }
    printf("\n");
    
    // Printing from Z to Y
    for(int ctr = Z; ctr >= Y; ctr--) {
        printf("%d ", ctr);
    }
    
    return 0;
}
